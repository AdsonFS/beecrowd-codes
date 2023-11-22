#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, x;
	vector<int> num;
	scanf("%d", &n);
	bool ok = false;
	for(int i = 0; i < n; i++) {
		scanf("%d", &x);
		num.pb(x);
	}
	sort(all(num));
	if(num[0] <= 8) {
		ok = true;
		for(int i = 1; i < n; i++) {
			if(num[i] - num[i-1] > 8) {
				ok = false;
				break;
			}
		}
	}
	if(ok) printf("S\n");
	else printf("N\n");
	return 0;
}
