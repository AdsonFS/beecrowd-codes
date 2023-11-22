#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
char s[110];
int n;

int main(int argc, char** argv) {
	while(scanf(" %s %d", s, &n) != EOF) {
		string str;
		int ind = 0;
		int now;
		int tam = strlen(s);
		n = tam - n;
		while(n--) {
			char c = 'a';
			for(int i = ind; i < tam - n; i++) {
				if(s[i] < c) {
					c = s[i];
					now = i+1;
				}
			}
			ind = now;
			str.pb(c);
		}
		printf("%s\n", str.c_str());
	}
	return 0;
}
