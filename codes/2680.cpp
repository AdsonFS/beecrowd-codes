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

int main(int argc, char ** argv) {
	int T, N;
	scanf("%d", &T);
	rep(t, 0, T) {
		int ans = 0;
		scanf("%d", &N);
		for(int i = 1; i*i <= N; i++) {
			if(!(N%i)) ans += i;
			if(!(N%i) && N/i != i) ans += N/i;
		}
		printf("%d\n", ans);
	}
	return 0;
}

