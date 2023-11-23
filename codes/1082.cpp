#include <bits/stdc++.h>		// 1082
using namespace std;

#define pb push_back

string alpha = "abcdefghijklmnopqrstuvwxyz";
vector<char> gp[30];
vector<string> str;
set<char> aux;
bool vis[30];

void dfs(int s)
{
	vis[s] = true;
	int tam = gp[s].size();
	aux.insert(alpha[s]);
	for(int i = 0; i < tam; i++)
	{
		if(!vis[alpha.find(gp[s][i])])
			dfs(alpha.find(gp[s][i]));
	}
}

void copiar()
{
	string ss;
	set<char>::iterator it;
	for(it = aux.begin(); it != aux.end(); it++)
		ss += *it;
	str.push_back(ss);
	aux.clear();
}

void addEdge(char v1, char v2)
{
	int vt1 = alpha.find(v1);
	int vt2 = alpha.find(v2);
	gp[vt1].pb(v2);
	gp[vt2].pb(v1);
}

void limpar(int v)
{
	memset(vis, false, sizeof(vis));
	for(int i = 0; i < v; i++)
		gp[i].clear();
	str.clear();
}

int main(int argc, char *argv[])
{
	int n, v, e;
	int caso = 0;
	scanf("%d", &n);
	for(int j = 0; j < n; j++)
	{
		aux.clear();
		scanf("%d%d", &v, &e);
		char v1, v2;
		for(int k = 0; k < e; k++)
		{
			cin >> v1 >> v2;
			addEdge(v1, v2);
		}
		for(int i = 0; i < v; i++)
		{
			if(!vis[i])
			{
				dfs(i);
				copiar();
			}
		}
		int tam = str.size();
		sort(str.begin(), str.end());
		printf("Case #%d:\n", ++caso);
		for(int i = 0; i < tam; i++)
		{
			int tam1 = str[i].size();
			for(int m = 0; m < tam1; m++)
			{
				printf("%c,", str[i][m]);
			}
			printf("\n");
		}
		printf("%d connected components\n\n", tam);
		limpar(v);
	}
	
	return 0;
}