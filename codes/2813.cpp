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

int main() {
    int ansA = 0, ansB = 0;
    int N, A = 0, B = 0;
    string a, b;
    cin >> N;
    rep(i, 0, N) {
        cin >> a >> b;
        if(a == "chuva") {
            if(A) A--, B++;
            else ansA++, B++;
        }
        if(b == "chuva") {
            if(B) B--, A++;
            else ansB++, A++;
        }
    }
    
    printf("%d %d\n", ansA, ansB);
    return 0;
}