#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXV 52
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int kadane(int c, int n, vector<int> &num)
{
	int now = 0;
	int best = 0;
	for(int i = 0; i < n; i++)
	{
		now = max(0, now + num[i] - c);
		best = max(best, now);
		
	}
	return best;
}

int main(int argc, char *argv[])
{
	int n, c, x;
	while(scanf("%d%d", &n, &c) != EOF)
	{
		vector<int> num;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			num.pb(x);
		}
		int sum = kadane(c, n, num);
		printf("%d\n", sum);
	}
	
	return 0;
}