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
const int MAX = 1e5+5;
int a[MAX], b[MAX];
int N, M, K, x;

int main(int argc, char** argv) {
    while(scanf("%d%d%d", &N, &M, &K) != EOF) {
        rep(i, 0, N) {
            scanf("%d", &x);
            a[x%K]++;
        }
        rep(i, 0, M) {
            scanf("%d", &x);
            b[x%K]++;
        }
        ll ans = 1LL * a[0] * b[0];
        for(int i = 1, j = K-1; i < K; i++, j--)
            ans += 1LL * a[i] * b[j];
        rep(i, 0, K) a[i] = b[i] = 0;
        printf("%lld\n", ans);
    }
    return 0;
}

