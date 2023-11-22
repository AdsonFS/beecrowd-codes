#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

struct card {
	ll vet[102];
};

int main(int argc, char ** argv) {
	card cc;
	int n, m, l, x, x1, x2;
	while(scanf("%d%d%d", &n, &m, &l) != EOF) {
		vector<card> ma, le;
		while(m--) {
			for(int i = 1; i <= n; i++) {
				scanf("%ld", &cc.vet[i]);
			}
			ma.pb(cc);
		}
		while(l--) {
			for(int i = 1; i <= n; i++) {
				scanf("%ld", &cc.vet[i]);
			}
			le.pb(cc);
		}
		scanf("%d%d%d", &x1, &x2, &x);
		if(ma[x1-1].vet[x] > le[x2-1].vet[x])
			printf("Marcos\n");
		else if(ma[x1-1].vet[x] < le[x2-1].vet[x])
			printf("Leonardo\n");
		else
			printf("Empate\n");		
	}
	return 0;
}

