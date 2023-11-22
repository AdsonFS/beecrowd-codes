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
set<string> str;
char s[15];
int N, t;

void solve(int bit, int m, string S) {
	if(!m) { str.insert(S); return; }
	for(int i = 0; i < t; i++) {
		if(!(bit & (1 << i)))
			solve(bit | (1 << i), m-1, S + s[i]);
	}
}

int main(int argc, char** argv) {
	scanf("%d", &N);
	while(N--) {
		scanf(" %s", s);
		t = strlen(s);
		solve(0, t, "");
		for(set<string>::iterator it = str.begin(); it != str.end(); it++)
			printf("%s\n", it->c_str());
		printf("\n");
		str.clear();
	}
	return 0;
}
