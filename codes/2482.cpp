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
const int MAX = 1e3+3;
map<string, string> mp;
char s1[MAX], s2[MAX];
int N;

int main(int argc, char ** argv) {
    scanf("%d", &N);
    rep(i, 0, N) {
        scanf(" %[^\n]", s1);
        scanf(" %[^\n]", s2);
        mp[s1] = s2;
    }
    scanf("%d", &N);
    rep(i, 0, N) {
        scanf(" %[^\n]", s1);
        scanf(" %[^\n]", s2);
        printf("%s\n%s\n\n", s1, mp[s2].c_str());
    }    
    return 0;
}
