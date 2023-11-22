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
int V[51][101];				// elementos(linha) por peso(coluna)

int knaspack(int W, int n, int b[], int wt[])
{
	memset(V, 0, sizeof(V));
	for(int i = 1; i <= n; i++)
	{
		for(int w = 1; w <= W; w++)
		{
			if(wt[i - 1] <= w)
				V[i][w] = max(V[i - 1][w], b[i - 1] + V[i - 1][w - wt[i - 1]]);
			else
				V[i][w] = V[i - 1][w];
		}
	}
	return V[n][W];
}

int main(int argc, char *argv[])
{
	int t, n, W, R, b1, w1;
	int b[51], wt[101];
	scanf("%d", &t);
	for(int k = 0; k < t; k++)
	{
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
		{
			scanf("%d%d", &b1, &w1);
			b[i] = b1;
			wt[i] = w1;
		}
		scanf("%d%d", &W, &R);
		int sum = knaspack(W, n, b, wt);
		if(sum < R)
			printf("Falha na missao\n");
		else
			printf("Missao completada com sucesso\n");
	}
	
	return 0;
}
