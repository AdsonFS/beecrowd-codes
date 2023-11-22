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
    int A, B;
    cin >> A >> B;
    printf("%d\n", A * B + (A-1) * (B - 1));
    printf("%d\n", 2 * (A-1) + 2 * (B-1));
    
    return 0;
}