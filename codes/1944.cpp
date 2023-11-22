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
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int n, p, ans;

struct letra {
	char a, b, c, d;
};

bool comp(letra &l1, letra &l2) {
	return (l1.a == l2.d && l1.b == l2.c && l1.c == l2.b && l1.d == l2.a);
}

int main(int argc, char** argv) {
	ans = 0;
	p = 100;
	letra ll;
	scanf("%d", &n);
	vector<letra> num;
	ll.a = 'F'; ll.b = 'A';
	ll.c = 'C'; ll.d = 'E';
	rep(i, 0, 101) num.pb(ll);
	while(n--) {
		scanf(" %c %c", &ll.a, &ll.b);
		scanf(" %c %c", &ll.c, &ll.d);
		if(comp(ll, num[p])) {
			ans++;
			p--;
			num.erase(num.end() - 1);
		}
		else {
			p++;
			num.pb(ll);
		}
	
	}
	printf("%d\n", ans);
	return 0;
}
