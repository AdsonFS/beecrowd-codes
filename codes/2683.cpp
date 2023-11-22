#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 1000010
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int p1[MAX], p2[MAX];

int find1(int a) {
	if(p1[a] == a) return a;
	return p1[a] = find1(p1[a]);
}

int find2(int a) {
	if(p2[a] == a) return a;
	return p2[a] = find2(p2[a]);
}

int main(int argc, char** argv) {
	int ans1, ans2;
	int n, u, v, w;
	scanf("%d", &n);
	vector<pii> num1, num2;
	REP(i, 1, n) {
		scanf("%d%d%d", &u, &v, &w);
		num1.pb(pii(w, ii(u, v)));
		num2.pb(pii(w, ii(u, v)));
		p1[i] = p2[i] = i;
	}
	ans1 = ans2 = 0;
	sort(all(num1));					// crescente
	sort(all(num2), greater<pii>());	// decrescente
	rep(i, 0, n) {						// union
		int a = find1(num1[i].S.F);
		int b = find1(num1[i].S.S);
		if(a != b) {
			ans1 += num1[i].F;
			p1[a] = b;
		}
	}
	rep(i, 0, n) {						// union
		int a = find2(num2[i].S.F);
		int b = find2(num2[i].S.S);
		if(a != b) {
			ans2 += num2[i].F;
			p2[a] = b;
		}
	}
	printf("%d\n%d\n", ans2, ans1);
	return 0;
}
