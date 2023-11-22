	#include <bits/stdc++.h>
	using namespace std;
	
	#define REP(i, a, b) for(int i = (a); i <= (b); i++)
	#define PER(i, a, b) for(int i = (a); i >= (b); i--)
	#define rep(i, a, b) for(int i = (a); i < (b); i++)
	#define all(S) (S).begin(), (S).end()
	#define pf push_front
	#define pb push_back
	#define mk make_pair
	#define S second
	#define F first
	typedef long long ll;
	typedef long double lf;
	typedef pair<int, int> ii;
	const int MAX = 2e5+5;
	vector<int> adj[MAX];

	struct CentroidDecomposition {
		int K, root;
		int mxDist = 0;
		vector<int> sub;
		vector<int> dad;
		vector<int> ans;
		vector<bool> vis;
		vector<int> sum;
		
		CentroidDecomposition(int N, int K) : K(K) {
			sub.resize(N+1);
			dad.resize(N+1);
			vis.resize(N+1);
			ans.resize(N+1);
			sum.resize(N+1);
			build(1, -1);
		}
		void build(int u, int p) {
			int N = dfs(u, u);
			int centroid = findCentroid(u, p, N);
			vis[centroid] = true;
			dad[centroid] = p;

			// adiciono a resposta que passa por "centroid"
			dfs_dist(centroid, centroid, 0);
			calc_sum();
			dfs_ans(centroid, centroid, 0, 1);
			clear_sum();

			// retiro o que não é caminho simples
			for(auto v : adj[centroid]) if(!vis[v]) {
				dfs_dist(v, v, 1);
				calc_sum();
				dfs_ans(v, v, 1, -1);
				clear_sum(0);
			}

			for(auto v : adj[centroid])
				if(!vis[v]) build(v, centroid);
		}
		void dfs_ans(int u, int p, int d, int k) {
			int dc = min(mxDist, K-d);
			if(dc >= 0) ans[u] += k * sum[dc];
			for(auto v : adj[u]) if(v != p && !vis[v]) dfs_ans(v, u, d+1, k);
		}
		void dfs_dist(int u, int p, int h) {
			sum[h]++; mxDist = max(mxDist, h);
			for(auto v : adj[u]) if(v != p && !vis[v]) dfs_dist(v, u, h+1);
		}
		void calc_sum() {
			for(int i = 1; i <= mxDist; i++)	
				sum[i] += sum[i-1];
		}
		void clear_sum(int k = 0) {
			for(int i = 0; i <= mxDist; i++)
				sum[i] = 0;
			mxDist = 0;
		}
		int dfs(int u, int p) {
			sub[u] = 1;
			for(auto v : adj[u])
				if(v != p && !vis[v])
					sub[u] += dfs(v, u);
			return sub[u];
		}
		int findCentroid(int u, int p, int N) {
			for(auto v : adj[u])
				if(v != p && !vis[v] && sub[v] > N/2)
					return findCentroid(v, u, N);
			return u;
		}
	};

	int main(int argc, char** argv) {
		int N, K, u, v;
		scanf("%d%d", &N, &K);
		rep(i, 1, N) {
			scanf("%d%d", &u, &v);
			adj[u].pb(v);
			adj[v].pb(u);
		}
		CentroidDecomposition cd(N, K);
		REP(u, 1, N) printf("%d\n", cd.ans[u]);
		return 0;
	}
