#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 998244353
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
typedef pair<int, pair<int, char> > pci;
int vet[MAX], v[MAX], h[MAX];
int cc;

int main(int argc, char** argv) {
	int N, M, K, l, x, t1, t2;
	while(scanf("%d%d", &N, &M) && (N+M)) {
		rep(i, 0, MAX) v[i] = h[i] = 0;
		scanf("%d%d", &l, &K);
		bool ok1 = 0, ok2 = 0;
		int a1 = 0, a2 = 0;
		int p1 = 0, p2 = 0;
		t1 = (M * 100) / l;
		t2 = (N * 100) / l;
		rep(i, 0, K) {
			scanf("%d", &x);
			v[x]++; h[x]++;
			vet[i] = x;
		}
		sort(vet, vet + K, greater<int>());
		for(int i = 0; i < K; i++) {
			x = vet[i];
			if(N >= x) {
				if(N == x && v[x] && a1 < t1) {
					a1++; p1++;
					v[x]--;
				}
				else if(N-x == x) {
					if(v[x] > 1 && a1 < t1) {
						a1++; p1 += 2;
						v[x] -= 2;
					}
				}
				else if(v[N-x] && a1 < t1) {
					a1++; p1 += 2;
					v[N-x]--;
					v[x]--;
				}
			}
			
			if(M >= x) {
				if(M == x && h[x] && a2 < t2) {
					a2++; p2++;
					h[x]--;
				}
				else if(M-x == x) {
					if(h[x] > 1 && a2 < t2) {
						a2++; p2 += 2;
						h[x] -= 2;
					}
				}
				else if(h[M-x] && a2 < t2) {
					a2++, p2 += 2;
					h[M-x]--;
					h[x]--;
				}
			}
		}
		if(a1 >= t1) ok1 = true;
		if(a2 >= t2) ok2 = true;
		if((M * 100) % l) ok1 = false;
		if((N * 100) % l) ok2 = false;
		
		if(ok1 && ok2) printf("%d\n", min(p1, p2));
		else if(ok1) printf("%d\n", p1);
		else if(ok2) printf("%d\n", p2);
		else printf("impossivel\n");
	}
	return 0;
}

