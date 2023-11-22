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
int vet[700][700];
int tira[1000];
int h, p, f;
bool ok;

void dfs(int i, int j, int p)
{
	if(p == f)
		ok = false;
	if(ok)
	{
		if(vet[i][j] == 0)
			vet[i][j] = tira[p++];
		
		if(i - 1 >= 0)
			dfs(i-1, j, p);
		else if(j - 1 >= 0)
			dfs(h-1, j-1, p);
	}
}

int main(int argc, char *argv[])
{
	while(scanf("%d%d%d", &h, &p, &f) && (h+p+f) != 0)
	{
		for(int i = 0; i < h; i++)
		{
			for(int j = 0; j < p; j++)
				cin >> vet[i][j];
		}
		
		for(int i = 0; i < f; i++)
			cin >> tira[i];
		ok = true;
		dfs(h-1, p-1, 0);
		for(int i = 0; i < h; i++)
		{
			cout << vet[i][0];
			for(int j = 1; j < p; j++)
				cout << " " << vet[i][j];
			cout << endl;
		}
	}
	return 0;
}
