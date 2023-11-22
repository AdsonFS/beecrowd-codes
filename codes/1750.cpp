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

int getVal(int a, int b) {
	return min(abs(a-b), 24 - abs(a-b));
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int N; cin >> N;
	vector<int> num(N);
	for(auto &x : num)
		cin >> x;
	sort(all(num));
	int s1 = 0, s2 = 0;
	for(int i = 0; i < N; i += 2)
		s1 += getVal(num[i], num[i+1]);
	num.pb(num[0]);
	for(int i = 1; i < N; i += 2)
		s2 += getVal(num[i], num[i+1]);
	printf("%d\n", min(s1, s2));
	return 0;
}
