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
	int a, n, x;
	int sum = 0;
	scanf("%d%d", &a, &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if(a * x >= 40000000)
			sum++;
	}
	printf("%d\n", sum);
	return 0;
}
