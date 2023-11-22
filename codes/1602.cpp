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
const int MAX = 2e6+6;
int p[MAX], sum[MAX];
int N, qnt[MAX];

void crivo() {
	memset(p, 1, sizeof p);
	p[0] = p[1] = 0;
	rep(i, 2, MAX) qnt[i] = 2;
	for(int i = 2; i < MAX; i++) {
		for(int j = i+i; j < MAX; j += i) {
			qnt[j]++;	// j é divisivel por i
			p[j] = 0;	// j nao é primo
		}
		sum[i] = sum[i-1];
		if(p[qnt[i]]) sum[i]++;
	}
}

int main(int argc, char ** argv) {
	crivo();
	while(scanf("%d", &N) != EOF)
		printf("%d\n", sum[N]);
	return 0;
}
