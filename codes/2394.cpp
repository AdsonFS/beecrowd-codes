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
	int n, m, x, ind;
	int best = INF;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		int sum = 0;
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &x);
			sum += x;
		}
		if(sum < best)
		{
			best = sum;
			ind = i+1;
		}
	}
	printf("%d\n", ind);
	return 0;
}