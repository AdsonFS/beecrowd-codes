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
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
map<string, bool> mapa;
set<string> lis;

void solve(string s) {
	int t = s.size();
	if(!t || mapa[s]) return;
	mapa[s] = true;
	lis.insert(s);
	for(int i = 0; i < t; i++) {
		string S = s;
		S.erase(S.begin()+i);
		solve(S);
	}
}

int main(int argc, char** argv) {
	string s;
	while(cin >> s) {
		solve(s);
		for(set<string>::iterator it = lis.begin(); it != lis.end(); it++)
			printf("%s\n", it->c_str());
		mapa.clear(); lis.clear();
		printf("\n");
	}
	return 0;
}


