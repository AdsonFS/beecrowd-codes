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

int main(int argc, char ** argv) {
    int N, A, B;
    while(scanf("%d%d%d", &N, &A, &B) && N|A|B)
        printf("%d\n", N/A + N/B - N/((A*B) / __gcd(A, B)));
    return 0;
}
