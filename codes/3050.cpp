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
const int MAX = 2e5+5;
int N, ans, a[MAX];

int main(int argc, char** argv) {
    multiset<int> mst;
    scanf("%d", &N);
    REP(i, 1, N) {
        scanf("%d\n", a+i);
        mst.insert(-a[i]-i);
    }
    REP(i, 1, N-1) {
        mst.erase(mst.lower_bound(-a[i]-i));
        ans = max(ans, a[i] - (*mst.begin()) - i);
    }
    printf("%d\n", ans);
    return 0;
}