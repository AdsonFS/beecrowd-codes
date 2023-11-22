#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 1010

struct lugar
{
	int *v;
	int i;
	int j;
	int valor;

	void setV()
	{
		valor = *v;
		v = &valor;
	}
};


int n, m, cont, fim;
typedef long long ll;
typedef pair<int, int> ii;
vector<lugar> resultado;
lugar reserva;
char vet[MAXV][MAXV];
bool vis[MAXV][MAXV];
bool pri = true;

bool comp1(const lugar x1, const lugar x2)
{
//	x1.i = 2;
	if(x1.i != x2.i)
		return (x1.i < x2.i);
	return (x1.j < x2.j);
}

bool comp(const lugar x1, const lugar x2)
{
	if(x1.valor != x2.valor)
		return (x1.valor > x2.valor);
//	cout << "V\n";
	if(x1.i != x2.i)
		return (x1.i < x2.i);
	return (x1.j < x2.j);
}

void ler()
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> vet[i][j];
			if(pri && vet[i][j] == '*')
			{
				pri = false;
				reserva.i = i;
				reserva.j = j;
			}
		}
	}
}

void dfs(int i, int j, int &atual)
{
	cont++;
	vis[i][j] = true;
	lugar l;

	if(vet[i + 1][j] == '*' && !vis[i + 1][j])
	{
		vis[i + 1][j] = true;
		l.i = i + 1;
		l.j = j;
		l.v = &atual;
		resultado.pb(l);
	}
	if(vet[i - 1][j] == '*' && !vis[i - 1][j])
	{
		vis[i - 1][j] = true;
		l.i = i - 1;
		l.j = j;
		l.v = &atual;
		resultado.pb(l);
	}
	if(vet[i][j + 1] == '*' && !vis[i][j + 1])
	{
		vis[i][j + 1] = true;
		l.i = i;
		l.j = j + 1;
		l.v = &atual;
		resultado.pb(l);
	}
	if(vet[i][j - 1] == '*' && !vis[i][j - 1])
	{
		vis[i][j - 1] = true;
		l.i = i;
		l.j = j - 1;
		l.v = &atual;
		resultado.pb(l);
	}

	if(vet[i + 1][j] == 'n' && !vis[i + 1][j])
		dfs(i + 1, j, atual);
	if(vet[i - 1][j] == 'n' && !vis[i - 1][j])
		dfs(i - 1, j, atual);
	if(vet[i][j + 1] == 'n' && !vis[i][j + 1])
		dfs(i, j + 1, atual);
	if(vet[i][j - 1] == 'n' && !vis[i][j - 1])
		dfs(i, j - 1, atual);
}

void auxiliar()
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cont = 0;
			int atual = 0;
			if(vet[i][j] == 'n' && !vis[i][j])
			{
				dfs(i, j, atual);
				atual = cont;
				int tam = resultado.size();
				for(int q = fim; q < tam; q++)
				{
					vis[resultado[q].i][resultado[q].j] = false;
					resultado[q].setV();
				}
				fim = tam;
			}
		}
	}
}

int main()
{
	scanf("%d%d", &n, &m);
	memset(vet, 'A', sizeof(vet));
	ler();
	auxiliar();
	
	int tam = resultado.size();
	if(tam > 0)
	{
		sort(resultado.begin(), resultado.end(), comp1);
		for(int i = 1; i < tam; i++)
		{
			if(resultado[i].i == resultado[i-1].i && resultado[i].j == resultado[i-1].j)
			{
				resultado[i].valor += resultado[i-1].valor;
			//	cout << "IGUAL:" << resultado[i].i << " - " << resultado[i].j << endl;
			}
		}
	
		sort(resultado.begin(), resultado.end(), comp);
		printf("%d,%d\n", resultado[0].i, resultado[0].j);
	}
	else
		printf("%d,%d\n", reserva.i, reserva.j);
	return 0;
}
