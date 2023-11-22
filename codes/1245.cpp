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

int main() {
    char c;
    int N, x;
    while(cin >> N) {
        int ans = 0;
        map<int, int> mpL, mpR;
        rep(i, 0, N) {
            cin >> x >> c;
            if(c == 'E') mpL[x]++;
            else mpR[x]++;
        }
        rep(i, 0, 100) ans += min(mpL[i], mpR[i]);
        cout << ans << endl;
    }
    return 0;
}