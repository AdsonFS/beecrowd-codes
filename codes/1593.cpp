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

int solve(string s) {
    if(s.empty()) return 0;
    string r;
    int curr = 0;
    for(auto a : s) {
        curr = curr * 10 + (a - '0');
        int q = curr / 2;
        curr %= 2;
        if(!r.empty() || q)
            r.pb(q + '0');
    }
    return curr + solve(r);
}

int main(int argc, char** argv) {
    int T;
    char r[MAX];
    scanf("%d", &T);
    rep(t, 0, T) {
        scanf(" %s", r);
        printf("%d\n", solve(r));
    }
    return 0;
}
