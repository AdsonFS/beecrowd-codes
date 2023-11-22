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
typedef pair<int, ii> pii;

int main(int argc, char const ** argv) {
    int N;
    // lê varios numeros até EOF
    // Qnd vc n sabe o limite da repeticao -> while
    // EOF para scanf();
    while(scanf("%d", &N) != EOF) {       // condicao -> ler até EOF
        if(N == 0) printf("vai ter copa!\n");
        else printf("vai ter duas!\n");
    }

    // EOF para cim
    // while(cin >> N) {       // condicao -> ler até EOF
        // printf("vai ter copa!\n");
    // }
    return 0;
}

