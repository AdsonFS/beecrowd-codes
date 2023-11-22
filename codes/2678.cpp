#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 2000010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
int d[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};

int main(int argc, char ** argv) {
	char s[310];
	while(scanf(" %[^\n]", s) != EOF) {
		int t = strlen(s);
		rep(i, 0, t) {
			s[i] = toupper(s[i]);
			if(s[i] >= 'A' && s[i] <= 'Z')
				printf("%d", d[s[i] - 'A']);
			else if((s[i] >= '0' && s[i] <= '9') || s[i] == '#' || s[i] == '*')printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}
