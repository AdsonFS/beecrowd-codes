#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

map<int, int> mapa;
bool primo[MAX];
int SUM[MAX];
int S[MAX];

void crivo(int n)
{
	primo[0] = 1;
	primo[1] = 1;
	primo[2] = 0;
	for(int i = 2; i <= n; i ++)
	{
		if(!primo[i])
		{
			for(int j = i * i; j <= MAX; j += i)
				primo[j] = 1;
		}
	}

	for(int i = 2; i < MAX; i++)
	{
		if(!primo[i - 2] && !primo[i])
		{
			mapa[i - 2] = 1;
			mapa[i] = 1;

			SUM[i] = 1;
			SUM[i - 2] = 1;
		}
	}

	return;
}

void somaA()
{
	for(int i = 2; i < MAX; i++)
		S[i] = S[i - 1] + SUM[i];
}

int main(int argc, char *argv[])
{
	crivo(sqrt(MAX) + 1);
	somaA();
	int n, x1, x2;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &x1, &x2);
		int p1 = max(x1, x2);
		int p2 = min(x1, x2);
		int aux = 0;
		if(x1 != x2)
		{
			if(SUM[p2] == 1)
				aux = 1;
			printf("%d\n", S[p1] - S[p2] + aux);
		}
		else
		{
			if(SUM[x1] == 1)
				printf("1\n");
			else
				printf("0\n");
		}
	}

	return 0;
}



