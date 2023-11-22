#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int dist[MAX];
int vet[101];
int n, m;

int dijkstra() {
	memset(dist, INF, sizeof(dist));
	dist[0] = 0;
	for(int j = 0; j <= m; j++) {		
		for(int i = 0; i < n; i++) {
			int v = vet[i] + j;
			if(v > m) break;
			dist[v] = min(dist[v], dist[j] + 1);
		}
	}
	return dist[m];
}

int main(int argc, char** argv) {
	int t;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d", &n, &m);
		for(int i = 0; i < n; i++)
			scanf("%d", &vet[i]);
		printf("%d\n", dijkstra());
	}
	return 0;
}
