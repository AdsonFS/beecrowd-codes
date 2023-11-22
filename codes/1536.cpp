#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 502
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
bool ok;

struct tim {
	int i, p, g, ga;
	void set(int n) {
		p = 0;
		g = 0;
		ga = 0;
		i = n;
	}
};

bool comp(const tim & t1, const tim & t2) {
	if(t1.p != t2.p)
		return (t1.p > t2.p);
	if(t1.g - t2.g != t2.g - t1.g)
		return (t1.g - t2.g > t2.g - t1.g);
	if(t1.ga != t2.ga)
		return (t1.ga > t2.ga);
	ok = true;
	return (t1.ga > t2.ga);
}

int main(int argc, char * * argv) {
	int n, x1, x2;
	char op;
	scanf("%d", &n);
	while(n--) {
		tim a, b;
		a.set(1);
		b.set(2);
		cin >> x1 >> op >> x2;
		a.g += x1; b.g += x2; b.ga += x2;
		
		if(x1 > x2)
			a.p += 3;
		else if(x1 < x2)
			b.p += 3;
		cin >> x1 >> op >> x2;
		a.g += x2; b.g += x1; a.ga += x2;
		if(x1 < x2)
			a.p += 3;
		else if(x1 > x2)
			b.p += 3;

		vector<tim> num;
		num.pb(a);
		num.pb(b);
		sort(all(num), comp);
		if(!ok)
			printf("Time %d\n", num[0].i);
		else
			printf("Penaltis\n");
	}
	return 0;
}
