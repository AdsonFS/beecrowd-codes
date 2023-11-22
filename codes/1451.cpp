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
string str;
int i, ok;

string solve(int k) {
    string s;
    while(i < str.size()) {
        if(str[i] == '[') i++, s = solve(k+1) + s;
        else if(str[i] == ']') i++, ok = 1;
        else s.pb(str[i++]);
        if(ok && !k) ok = 0;
        if(ok) break;
    }
    return s;
}

int main(int argc, char ** argv) {
	while(cin >> str) {
        i = 0;
        cout << solve(0) << "\n";
    }
    return 0;
}

