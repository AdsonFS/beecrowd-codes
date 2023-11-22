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
int h;

int main(int argc, char * * argv) {
	int n, x1, x2, s1, s2;
	while(scanf("%d", &n) && n) {
		s1 = s2 = 0;
		printf("Teste %d\n", ++h);
		for(int i = 0; i < n; i++) {
			scanf("%d%d", &x1, &x2);
			s1 += x1;
			s2 += x2;
			printf("%d\n", s1 - s2);
		}
		printf("\n");
	}
	return 0;
}

