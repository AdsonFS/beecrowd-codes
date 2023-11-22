#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	double n;
	while(scanf("%lf", &n) != EOF)
		printf("%.10lf\n",  n*sin(108*acos(-1)/180)/sin(63*acos(-1)/180));
	return 0;
}
