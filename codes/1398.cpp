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
int mod = 131071;

int main(int argc, char ** argv) {
	string s;
	char r[1010];
	while(scanf("%s", r) != EOF) {
		s = r;
		int num = 0;
		while(s[s.size()-1] != '#')
			scanf("%s", r), s += r;
		rep(i, 0, s.size()-1)
			num = (num*2 + (s[i]-'0')) % mod;
		printf("%s\n", num ? "NO" : "YES");
	}
	return 0;
}
