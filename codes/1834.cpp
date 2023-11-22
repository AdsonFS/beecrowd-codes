#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 10

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;


int main(int argc, char *argv[])
{
	int c = 0;
	int n, x, y, p, x1, y1, x2, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	double m = (double)(y2 - y1) / (x2 - x1);
	double dist = hypot((x1-x2), (y1 - y2));
	scanf("%d", &n);
	printf("Relatorio Vogon #35987-2\n");
	printf("Distancia entre referencias: %.2lf anos-luz\n", dist);
	map<int, int> mapa;							// X - Y
	int oeste = 0, leste = 0;
	int sumO = 0, sumL = 0;
	
	if(y2 > y1)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d%d%d", &x, &y, &p);
			if(y > ((m * (x - x1)) + y1))
			{
				oeste++;
				sumO += p;
			}
			else if(y < ((m * (x - x1)) + y1))
			{
				leste++;
				sumL += p;
			}
			else
				c++;
		}
	}
	else
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d%d%d", &x, &y, &p);
			if(y < ((m * (x - x1)) + y1))
			{
				oeste++;
				sumO += p;
			}
			else if(y > ((m * (x - x1)) + y1))
			{
				leste++;
				sumL += p;
			}
			else
				c++;
		}
	}
	
	printf("Setor Oeste:\n");
	printf("- %d planeta(s)\n", oeste);
	printf("- %d bilhao(oes) de habitante(s)\n", sumO);
	printf("Setor Leste:\n");
	printf("- %d planeta(s)\n", leste);
	printf("- %d bilhao(oes) de habitante(s)\n", sumL);
	printf("Casualidades: %d planeta(s)\n", c);
	
	return 0;
}