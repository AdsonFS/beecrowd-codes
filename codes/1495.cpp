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
const int MAX = 2e5+5;
int N, G;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N >> G) {
		int a, b, ans = 0;
		vector<int> num;
		rep(i, 0, N) {
			cin >> a >> b;
			if(a > b) ans += 3;
			else num.pb(b-a);
		}
		sort(all(num));
		for(auto val : num)
			if(G > val) {
				G -= val + 1;
				ans += 3;
			} else if(G == val) {
				G = 0;
				ans++;
			} else ans += (val == 0);
		cout << ans << endl;
	}
	return 0;
}
