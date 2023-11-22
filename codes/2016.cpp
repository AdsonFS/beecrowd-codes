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

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll ans = 0;
	int N, M, B;
	cin >> N >> M;
	vector<int> a(N);
	rep(i, 0, M) {
		cin >> B;
		ll sum = 0;
		rep(j, 0, N) {
			cin >> a[j];
			sum += a[j];
		}
		sum -= a[0];
		ll curr = 0;
		for(auto x : {1, 10, 100, 1000, 10000})
			if(sum + x <= B) curr = x;
		if(curr >= a[0]) ans += curr - a[0];
		else ans += curr;
	}
	cout << ans << endl;
	return 0;
}
