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
int V[101][51];				// elementos(linha) por peso(coluna)

int knapsack(int W, int n, int b[], int wt[])
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

int knapsackElementos(int W, int n, int wt[], int &peso, vector<int> &mochila)
{
	peso = 0;
	int i = n;
	int w = W;
	int aux = V[i][w];
	while(aux != 0 || i > 1)
	{
		if(V[i][w] != V[i - 1][w])
		{
			mochila.pb(i);
			w -= wt[i - 1];
			peso += wt[i - 1];
		}
		i--;
		aux = V[i][w];
	}
	return mochila.size();
}

int main(int argc, char *argv[])
{
	int b[101], wt[101];
	int t, n, b1, w1, peso;
	scanf("%d", &t);
	for(int k = 0; k < t; k++)
	{
		int bri = 0;
		scanf("%d", &n);
		vector<int> mochila;
		for(int i = 0; i < n; i++)
		{
			scanf("%d%d", &b1, &w1);
			b[i] = b1;
			wt[i] = w1;
			bri += b1;
		}
		int sum = knapsack(50, n, b, wt);
		int elementos = knapsackElementos(50, n, wt, peso, mochila);
		printf("%d brinquedos\n", sum);
		printf("Peso: %d kg\n", peso);
		printf("sobra(m) %d pacote(s)\n\n", n - elementos);
	}
	
	return 0;
}
