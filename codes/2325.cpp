#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 510

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	vector<ll> num;
	ll c, n, x1, x2;
	map<ll, ll> mapa;
	cin >> c >> n;
	for(int i = 0; i < c; i++) {
		cin >> x1 >> x2;
		mapa[x1] = x2;
	}
	for(int i = 0; i < n; i++) {
		cin >> x1 >> x2;
		if(mapa[x1] < x2) {
			mapa[x1] = x2;
			num.pb(x1);
		}
	}
	sort(all(num));
	int tam = num.size();
	for(int i = 0; i < tam; i++)
		if(num[i] != num[i - 1])
			cout << num[i] << " " << mapa[num[i]] << "\n";
	return 0;
}
