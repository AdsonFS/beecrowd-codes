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
#define pb push_back
#define pf push_front
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n;
	int ans = 0;
	char str[MAX];
	scanf("%d", &n);
	map<string, bool> mapa;
	while(scanf(" %[^\n]", str) != EOF) {
		int i;
		string user;
		bool ok = true;
		int tam = strlen(str);
		for(i = 0; i < tam; i++) {
			char c = str[i];
			if(c == '@') break;
			if(c == '+') ok = false;
			if(!ok || c == '.') continue;
			user.pb(c);
		}
		for(; i < tam; i++) {
			char c = str[i];
			user.pb(c);
		}
		if(!mapa[user]) {
			mapa[user] = true;
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
