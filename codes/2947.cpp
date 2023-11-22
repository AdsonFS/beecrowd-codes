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
const int MAX = 1e2+2;
char s[MAX][MAX];
int N, M, ans;

int main(int argc, char ** argv) {
	scanf("%d", &M);
	scanf("%s", s[0]);
	scanf("%d", &N);
	REP(i, 1, N) scanf("%s", s[i]);
	rep(j, 0, M) {
		int aux = 0;
		map<char, int> mp;
		REP(i, 1, N) {
			if(s[i][j] == s[0][j]) continue;
			aux = max(aux, mp[s[i][j]]+1);
			mp[s[i][j]]++;
		}
		ans += aux;
	}
	printf("%d\n", ans);
	return 0;
}
