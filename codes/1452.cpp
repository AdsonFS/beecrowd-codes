#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 1000
typedef long long ll;
typedef pair<int, int> ii;
bool vis[500];

int main(int argc, char *argv[])
{
	int n, m, p;
	while(scanf("%d%d", &n, &m) && (n + m) != 0)
	{
		vector<string> server;
		int cont = 0;
		for(int i = 0; i < n; i++)
		{
			string aux, str;
			scanf("%d", &p);
			for(int j = 0; j < p; j++)
			{
				cin >> aux;
				str += "-" + aux + "-";
			}
			server.pb(str);
		}
		
		for(int i = 0; i < m; i++)
		{
			memset(vis, false, sizeof(vis));
			string aux, str;
			scanf("%d", &p);
			for(int j = 0; j < p; j++)
			{
				cin >> aux;
				str = "-" + aux + "-";
				for(int k = 0; k < n; k++)
				{
					if(!vis[k])
					{
						if(server[k].find(str) != -1)
						{
						   	vis[k] = true;
							cont++;
						}
					}
				}
			}
		}
		printf("%d\n", cont);
	}

	return 0;
}