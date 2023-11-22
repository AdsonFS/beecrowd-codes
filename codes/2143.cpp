#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int t, n, p;
	while(scanf("%d", &t) && t) {
		for(int i = 0; i < t; i++) {
			scanf("%d", &n);
			n--;
			p = 1;
			if(n % 2 != 0) {
				p = 2;
				n--;
			}
			printf("%d\n", (n * 2) + p);
		}
	}
	return 0; 
}

