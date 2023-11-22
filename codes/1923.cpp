#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXV 2002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
vector<int> adj[MAXV];
map<string, int> mapa;
map<int, string> reverso;
vector<int> nome;
set<string> num;
bool vis[MAXV];
bool vazio;

void bfs(int x, int g)
{
	queue<int> fila;
	fila.push(x);
	vis[x] = true;
	int atual = 0;
	if(adj[1].size() == 0)
	{
		vazio = true;
		return;
	}
	int aux, aux2 = 1;
	while(!fila.empty() && atual < g)
	{
		atual++;
		aux = 0;
		for(int k = 0; k < aux2; k++)
		{
			
			int v = fila.front();
			int tam = adj[v].size();
			fila.pop();
			for(int i = 0; i < tam; i++)
			{
				int u = adj[v][i];
				if(!vis[u])
				{
					aux++;
					num.insert(reverso[u]);
					fila.push(u);
					vis[u] = true;
				//	cout << "Instancia: " << atual << " - Add: " << reverso[u] << "\n\n";
				}
			}
		}
		aux2 = aux;
	}
}

int main(int argc, char *argv[])
{
	mapa["Rerisson"] = 1;
	reverso[1] = "Rerisson";
	string n1, n2;
	int n, g;
	int k = 2;
	scanf("%d%d", &n, &g);
	for(int i = 0; i < n; i++)
	{
		cin >> n1 >> n2;
		if(mapa[n1] == 0)
		{
			reverso[k] = n1;
			mapa[n1] = k++;
		}
		if(mapa[n2] == 0)
		{
			reverso[k] = n2;
			mapa[n2] = k++;
		}

		adj[mapa[n1]].pb(mapa[n2]);
		adj[mapa[n2]].pb(mapa[n1]);
	}
	bfs(1, g);
	if(!vazio)
	{
		int tam = num.size();
		printf("%d\n", tam);
		set<string>::iterator it;
		for(it = num.begin(); it != num.end(); it++)
			cout << *it << "\n";
	}
	else
		printf("1\n");
	return 0;
}
