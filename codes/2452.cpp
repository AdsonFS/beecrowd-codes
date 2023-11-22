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
const int MAX = 1e5+5;
int N, M, x, a[MAX];
int ans, now;

int main() {
    scanf("%d%d", &N, &M);
    rep(i, 0, N) {
        scanf("%d", &x);
        a[x] = 1;
    }
    bool first = true;
    REP(i, 1, N) {
        if(a[i]) first = 0, now = 0;
        else now += first ? 2 : 1;
        ans = max(ans, (now + 1) / 2);
    }
    first = true; now = 0;
    PER(i, N, 1) {
        if(a[i]) first = 0, now = 0;
        else now += first ? 2 : 1;
        ans = max(ans, (now + 1) / 2);
    }
    
    
    printf("%d\n", ans);
    return 0;
}