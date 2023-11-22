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
const int MAX = 1e6+6;
char s1[MAX], s2[MAX];
int a[MAX], b[MAX];
ll ans;

int main(int argc, char ** argv) {
	scanf("%s", s1); scanf("%s", s2);
	int t1 = strlen(s1), t2 = strlen(s2);
	rep(i, 0, t2) b[s2[i]-'a']++;
	int n = 0, m = t1;
	rep(i, 0, t1) {
		bool ok = true;
		a[s1[i]-'a']++;
		if(i+1 >= t2) {
			n++;
			rep(i, 0, 26) if(a[i] != b[i]) ok = false;
			if(ok) {
				ans += (ll) n * (t1-i);
				n = 0;
			}
			a[s1[i-t2+1]-'a']--;
		}
	}
	cout << ans << endl;
	return 0;
}

