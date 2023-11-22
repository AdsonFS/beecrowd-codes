#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 22

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv)
{
	int n;
	int x = 0;
	scanf("%d", &n);
	while(n >= 2)
	{
		n = (n/2);
		x++;
	}
	printf("%.0lf\n", pow(4, x));
	return 0;
}
