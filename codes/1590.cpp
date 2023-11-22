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
const int MAX = 40;
int T, N, K, a[MAX];

int main(int argc, char ** argv) {
	scanf("%d", &T);
	rep(t, 0, T) {
		int ans = (1<<30)-1;
		vector<int> num, aux;
		scanf("%d%d", &N, &K);
		rep(i, 0, N) scanf("%d", a+i);
		rep(i, 0, N) num.pb(a[i]);
		PER(k, 30, 0) {
			aux.clear();
			rep(i, 0, num.size())
				if(num[i] & (1 << k)) aux.pb(num[i]);
			if(aux.size() >= K) swap(aux, num);
		}
		rep(i, 0, num.size()) ans &= num[i];
		printf("%d\n", ans);
	}
	return 0;
}
