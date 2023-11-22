#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
const int MAX = 1e3+3;

int main(int argc, char** argv) {
	char op;
	int C, N, p, x;
	while(scanf("%d%d", &C, &N) != EOF) {
		int ans = 0;
		vector<int> est(C);
		rep(i, 0, N) {
			scanf(" %c", &op);
			if(op == 'C') {
				int cnt = 0;
                scanf("%d%d", &p, &x);
				rep(i, 0, C) {
                    if(!est[i]) cnt++;
                    else cnt = 0;
                    if(cnt == x) {
                        ans += 10;
                        int j = i;
                        while(cnt--) est[j--] = p;
                        break;
                    }
                }
			} else {
				scanf("%d", &p);
				for(auto &a : est)
                    if(a == p) a = 0;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}

