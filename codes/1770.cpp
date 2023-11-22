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
typedef pair<char, int> ci;
int N, M, a[110];

int main(int argc, char ** argv) {
	while(scanf("%d%d", &N, &M) != EOF) {
		REP(i, 1, N) scanf("%d", &a[i]);
		set<int> num;
		int ans = -1;
		int cont = 0;
		rep(i, 0, M) {
			scanf("%d", &a[0]);
			num.insert(a[0]);
			cont += a[a[0]];
			if(cont >= 0 && num.size() == N) ans = cont, cont = -(1 << 30);
		}
		printf("%d\n", ans);
	}
	return 0;
}
