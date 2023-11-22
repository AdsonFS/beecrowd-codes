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
const int MAX = 1e3+3;
char s[MAX], str[MAX];
int x;

int main(int argc, char ** argv) {
	while(scanf("%d %s", &x, s)) {
		str[0] = '0';
		str[1] = '\0';
		int p = 0;
		int t = strlen(s);
		if(!x && t == 1 && s[0] == '0') break;
		rep(i, 0, t) {
			if(s[i] == '0' && !p) continue;
			if(s[i]-'0' != x ) str[p++] = s[i];
		}
		if(p) str[p] = '\0';
		printf("%s\n", str);
	}
	return 0;
}
