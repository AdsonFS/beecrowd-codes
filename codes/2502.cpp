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
#define MAX 1010
#define S second
#define F first
typedef long long int ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long ull;
string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ.,;:()!?";
char s1[30], s2[30], s[MAX];
// char v[200];

bool ok(char c) {
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) return true;
	rep(i, 52, 60) if(c == str[i]) return true;
	return false;
}

int main(int argc, char** argv) {
	int n, m;
	while(scanf("%d%d", &n, &m) != EOF) {
		// rep(i, 0, (int)str.size()) v[(int)str[i]] = str[i];
		map<char, char> v;
		scanf(" %[^\n]", s1);
		scanf(" %[^\n]", s2);
		rep(i, 0, n) {
			char c1 = toupper(s1[i]);
			char c2 = toupper(s2[i]);
			v[c1] = c2; v[c2] = c1;
			c1 = tolower(s1[i]);
			c2 = tolower(s2[i]);
			v[c1] = c2;
			v[c2] = c1;
		}
		while(m--) {
			scanf(" %[^\n]", s);
			int tam = strlen(s);
			rep(i, 0, tam) {
				if(v.count(s[i]))printf("%c", v[(int)s[i]]);
				else printf("%c", s[i]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}


