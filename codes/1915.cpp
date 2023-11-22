#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define pf push_front
#define mk make_pair
#define S second
#define F first
#define MAX 310
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
map<int, int> mapa[MAX];
vector<int> nome[MAX];					// guarda os vetores de cada nome
vector<int> adj[MAX];
int cap[MAX][MAX];
vector<int> num;						// vetor do brinquedo atual
vector<int> v;
char str[110];
bool vis[MAX];
int pai[MAX];
int t1, t2;
int n, m;

bool bfs() {							// bfs normal
	memset(vis, 0, sizeof(vis));
	queue<int> q;
	vis[0] = true;
	pai[0] = -1;
	q.push(0);
	while(!q.empty()) {
		int u = q.front();
		int tam = adj[u].size();
		for(int i = 0; i < tam; i++) {
			int v = adj[u][i];
			if(!vis[v] && cap[u][v]) {
				vis[v] = true;
				pai[v] = u;
				q.push(v);
				if(v == 300) return true;
			}
		}
		q.pop();
	}
	return false;
}

int maxFlow() {							// algoritmo de flow normal
	int ans = 0;
	while(bfs()) {
		int aux = 300;
		while(pai[aux] != -1) {
			cap[pai[aux]][aux]--;
			cap[aux][pai[aux]]++;
			aux = pai[aux];
		}
		ans++;
	}
	return ans;
}

int CeilIndex(vector<int> &V, int l, int r, int key) { 
    while (r - l > 1) { 
        int m = l + (r - l) / 2; 
        if (V[m] >= key) r = m; 
        else l = m; 
    } 
    return r; 
} 
  
int LIS() { 
    if (!v.size()) return 0; 
    vector<int> tail(v.size(), 0); 
    int length = 1;
    tail[0] = v[0]; 
    for (size_t i = 1; i < v.size(); i++) { 
        if (v[i] < tail[0]) tail[0] = v[i];  
        else if (v[i] > tail[length - 1]) tail[length++] = v[i]; 
        else tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i]; 
    }
    return length; 
} 

int main(int argc, char** argv) {
	while(scanf("%d%d", &n, &m) && (n+m)) {
		memset(cap, 0, sizeof(cap));		// zero
		REP(i, 0, 300) {					// zero
			adj[i].clear(); 
			nome[i].clear();
			mapa[i].clear();
		}
		
		REP(i, 1, n) {
			scanf(" %s", str);
			adj[0].pb(i);					// adiciono aresta do inicio ao nome
			cap[0][i] = 1;
			int tam = strlen(str);
			map<int, bool> mp;
			for(int j = 0; j < tam; j++) {	// crio o vetor do nome
				int c = str[j] - 64;
				while(mp[c])
					c += 26;
				nome[i].pb(c);
				mp[c] = true;
				mapa[i][c] = j+1;
			}
		}
		
		REP(j, 111, 110 + m) {				// brinquedos
			scanf(" %s", str);
			num.clear();
			t1 = strlen(str);	
			map<int, bool> mp;
			for(int i = 0; i < t1; i++) {	// crio o vetor do brinquedo atual
				int c = str[i] - 64;
				while(mp[c])
					c += 26;
				mp[c] = true;
				num.pb(c);
			}
			
			REP(i, 1, n) {					// tento ligar ele em todos os nomes
				v.clear();
				for(int k = 0; k < t1; k++)
					if(mapa[i][num[k]]) v.pb(mapa[i][num[k]]);
				
				t2 = nome[i].size();
				int v = LIS();				// maior numero de elementos iguais
				int v1 = t1 - v;
				int v2 = t2 - v;
				if((v1+v2) % 5 == 0) {		// se for multiplo de 5
					adj[i].pb(j);			// ligo o nome ao brinquedo
					adj[j].pb(i);
					cap[i][j] = 1;
				}
			}
			adj[j].pb(300);					// ligo o brinquedo ao fim
			cap[j][300] = 1;
		}
		int mf = maxFlow();
		printf("P = %.2lf\n", (double)((100.0 * mf) / n));
	}
	return 0;
}
