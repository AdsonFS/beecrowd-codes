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
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, m, k;
	char s[1000], s1[1000];
	while(scanf("%d%d", &n, &m) != EOF) {
		map<string, bool> mapa[55];
		map<string, int> id;
		int p = 1;
		while(n--) {
			scanf(" %[^\n]", s);
			scanf("%d", &k);
			while(k--) {
				scanf(" %[^\n]", s1);
				mapa[p][s1] = 1;
			}
			id[s] = p++;
		}
		while(m--) {
			scanf(" %[^\n]", s);
			int tam = strlen(s);
			bool ok = false;
			string S1, S2;
			rep(i, 0, tam) {
				if(s[i] == ';') ok = true;
				if(s[i] == ';') continue;
				if(!ok) S1.pb(s[i]);
				else S2.pb(s[i]);
			}
			// cout << S1 << " " << S2 << endl;
			if(mapa[id[S1]][S2]) puts("Y");
			else puts("N");
		}
	}
	
	return 0;
}

