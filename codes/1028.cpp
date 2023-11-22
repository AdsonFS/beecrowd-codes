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

int main(int argc, char *argv[])
{
	int n, x1, x2;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &x1, &x2);
		printf("%d\n", __gcd(x1, x2));
	}
	
	return 0;
}