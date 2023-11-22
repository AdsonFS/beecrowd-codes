#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int vet[12];
	int t, n, m, x, v;
	scanf("%d", &t);
	while(t--) {
		v = 0;
		scanf("%d%d", &n, &m);
		memset(vet, 0, sizeof(vet));
		for(int i = 0; i < m; i++) {
			scanf("%d", &x);
			vet[x]++;
			if(vet[x] > m/2)
				v = x;
		}
		if(v) printf("%d\n", v);
		else printf("-1\n");
	}
	return 0;
}
