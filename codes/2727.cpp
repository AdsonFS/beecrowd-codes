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
#define MAX 1001000
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
string num[30];
string str;
int n;

void solve(int i, int j, int ind) {
	if(!j) return;
	rep(k, 0, i) num[ind].pb('.');
	if(j != 1) num[ind].pb(' ');
	solve(i, j-1, ind);
}

int main(int argc, char** argv) {
	for(int i = 0, j = 1; i < 26; i += 3, j++) {
		solve(1, j, i);
		solve(2, j, i+1);
		solve(3, j, i+2);
	}
	char aux[100];
	while(scanf(" %[^\n]", aux) != EOF) {
		str = aux;
		for(int i = 0; i < 26; i++)
			if(num[i] == str) { printf("%c\n", (char)i+97); break; }
	}
	return 0;
}
