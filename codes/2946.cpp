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
const int MAX = 1e5+5;
vector<int> num;
int N, m, x;
char s[MAX];

int main(int argc, char ** argv) {
	scanf("%s", s);
	scanf("%d", &N);
	int sz = strlen(s);
	rep(k, 0, N) {
		x = 0;
		scanf("%d", &m);
		rep(i, 0, sz) {
			x *= 2;
			x += (s[i] == '1');
			x %= m;
		}
		if(!x) num.pb(m);
	}
	sort(all(num));
	if(num.empty()) puts("Nenhum");
	else {
		printf("%d", num[0]);
		rep(i, 1, num.size()) printf(" %d", num[i]);
		printf("\n");
	}
	return 0;
}

