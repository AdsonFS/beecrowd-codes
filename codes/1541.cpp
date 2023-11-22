#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
double x[MAX], y[MAX];

int main(int argc, char** argv) {
	int a, b, c;
	while(scanf("%d", &a) && a) {
		scanf("%d%d", &b, &c);
		printf("%d\n", (int)sqrt((a * b * 100) / c));
	}
	return 0;
}
