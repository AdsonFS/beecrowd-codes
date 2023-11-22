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
const int MAX = 1e4+4;
int T, N, a[MAX];

int main(int argc, char ** argv) {
    scanf("%d", &T);
    rep(t, 0, T) {
        ll sum = 0, ans;
        scanf("%d", &N);
        rep(i, 0, N) scanf("%d", a+i);
        sort(a, a + N);
        rep(i, 0, N) {
            if(a[i]-1 > sum) {
                ans = sum+1;
                break;
            }
            sum += a[i]; ans = sum+1;
        }
        printf("%lld\n", ans);
    }
    return 0;
}
