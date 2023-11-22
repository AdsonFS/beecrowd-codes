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
int pdl[MAX], pd[MAX];
int N, M, x;

int main(int argc, char ** argv) {
	while(scanf("%d%d", &N, &M) && N|M) {
		REP(i, 1, N) {
			REP(j, 1, M) {
				scanf("%d", &x);
				if(j == 1) pdl[j] = x;
				else pdl[j] = max(pdl[j-1], pdl[j-2]+x);
			}
			if(i == 1) pd[i] = pdl[M];
			else pd[i] = max(pd[i-1], pd[i-2] + pdl[M]);
		}
		printf("%d\n", pd[N]);
	}
	return 0;
}
