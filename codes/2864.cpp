#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 10050
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, a, b, c;
	scanf("%d", &n);
	while(n--) {
		scanf("%d%d%d", &a, &b, &c);
		double ans = ((b * b) - (4.0 * a * c)) / (4.0 * a);
		printf("%.2lf\n", -ans);
	}
	return 0;
}

