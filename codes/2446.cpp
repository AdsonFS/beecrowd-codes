#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXN 100002
#define MAXC 1002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int wt[MAXC];
bool V[MAXC][MAXN];

bool subsetSum(int W, int n)
{
	for(int i = 0; i <= n; i++)
		V[i][0] = true;
	for(int i = 1; i <= n; i++)
	{
		for(int w = 1; w <= W; w++)
		{
			bool e = V[i - 1][w];
			if(!e && wt[i - 1] <= w)
				e = V[i - 1][w - wt[i - 1]];
			V[i][w] = e;
			if(w == W && e)
				return true;
		}
	}
	return V[n][W];
}

int main(int argc, char** argv)
{
	int W, n;
	scanf("%d%d", &W, &n);
	for(int i = 0; i < n; i++)
		cin >> wt[i];
	
	if(subsetSum(W, n) || W == 0)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}