#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 125000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

bool comp(const ii &x1, const ii & x2) {
	return x1.F > x2.F;
}

int main(int argc, char** argv) {
	int t, n, x, d, tipo, maior;
	scanf("%d", &t);
	while(t--) {
		d = 0;
		tipo = 0;
		maior = INF;
		scanf("%d", &n);
		vector<ii> num;
		for(int i = 0; i < n; i++) {
			scanf("%d", &x);
			if(x > 0) num.pb(mk(x, 1));
			else num.pb(mk(x * -1, -1));
		}
		sort(all(num), comp);
		for(int i = 0; i < n; i++) {
			if(num[i].F < maior && num[i].S != tipo) {
				d++;
				tipo = num[i].S;
				maior = num[i].F;
			}
		}
		printf("%d\n", d);
	}
	return 0;
}
