#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = int (a); i < int (b); i++)
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first
#define pi 3.1415

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[])
{
	int n, m;
	scanf("%d%d", &n, &m);
	double area = (4 * pi * n * n * n) / 3.0;
	int x = floor(m / area);
	printf("%d\n", x);
	return 0;
}