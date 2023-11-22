#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 105

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int V[MAX][MAX];

int main(int argc, char * * argv) {
	int n, q, v, k;
	while(scanf("%d%d", &n, &q) != EOF) {
		map<int, int> mapa;				// quantidade de vezes
		map<ii, int> ordem;				// v - k - i
		for(int i = 0; i < n; i++) {
			scanf("%d", &v);
			int x = ++mapa[v];
			ordem[mk(v, x)] = i+1;
		}
		for(int i = 0; i < q; i++) {
			scanf("%d%d", &k, &v);
			printf("%d\n", ordem[mk(v, k)]);
		}
	}
	
	return 0;
}
