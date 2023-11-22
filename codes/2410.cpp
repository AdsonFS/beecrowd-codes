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
    int N, x;
    set<int> st;
    scanf("%d", &N);
    rep(i, 0, N) {
        scanf("%d", &x);
        st.insert(x);
    }
    printf("%d\n", st.size());
    return 0;
}