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
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 55
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
vector<string> str;
int N, M, h;

bool mai(char c) { return (c >= 'A' && c <= 'Z'); }

int main(int argc, char** argv) {
	string s;
	cin >> N;
	while(cin >> N) {
		str.clear();
		rep(i, 0, N) {
			cin >> s;
			str.pb(s);
		}
		if(h++) printf("\n");
		cin >> M;
		while(M--) {
			cin >> s;
			s.pb('Z');
			bool ok = true;
			// debug(s);
			rep(i, 0, N) {
				// debug(i);
				int t = str[i].size();
				int p = s.find(str[i]);
				while(p != -1) {
					if(mai(s[p+t])) ok = false;
					else {
						s[p] = '-';
						p = s.find(str[i]);
					}
					if(!ok) break;
				}
				if(!ok) break;
			}
			if(ok) puts("Prossiga");
			else puts("Abortar");
		}
	}
	return 0;
}



