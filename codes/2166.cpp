#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1100
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	double x = 0;
	for(int i = 0; i < n; i++)
		x = 1.0 / (2 + x);
	printf("%.10lf\n", 1 + x);
	
	return 0;
}