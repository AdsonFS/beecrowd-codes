#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define S second
#define F first

typedef pair<int, int> ii;
typedef long long int ll;
const int MAX = 2e5+5;
const int INF = 1e9+9;

int main () {
    ll X, Y;
    while(scanf("%lld%lld", &X, &Y) != EOF) {
        string a = "00000000000000000000000000000000";
        string b = "00000000000000000000000000000000";
        string c = "00000000000000000000000000000000";
        for(int i = 31; i >= 0; i--) if(X & (1LL << i)) a[i] = '1';
        for(int i = 31; i >= 0; i--) if(Y & (1LL << i)) b[i] = '1';
        for(int i = 31; i >= 0; i--) if(a[i] != b[i]) c[i] = '1';
        ll sum = 0;
        for(int i = 31; i >= 0; i--) if(c[i] == '1') sum += (1LL << i);
        printf("%lld\n", sum);
    }
    return 0;
}