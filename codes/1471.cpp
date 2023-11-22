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
typedef pair<char, int> ci;
const int MAX = 1e4+4;
vector<int> num;
bool v[MAX];
int N, M, x;

int main(int argc, char ** argv) {
	while(scanf("%d%d", &N, &M) != EOF) {
		memset(v, 0, sizeof v);
		rep(i, 0, M) scanf("%d", &x), v[x] = 1;
		REP(i, 1, N) if(!v[i]) num.pb(i);
		if(num.empty()) puts("*");
		else {
			rep(i, 0, num.size()) printf("%d ", num[i]);
			printf("\n");
		}
		num.clear();
	}
	return 0;
}
