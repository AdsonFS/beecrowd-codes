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
	cout << fixed << setprecision(0);
	int n;
	while(scanf("%d", &n) && n != 0)
	{
		vector<int> num;
		vector<string> nomes;
		string nome;
		for(int k = 0; k < n; k++)
		{
			cin >> nome;
			int tam = nome.size();
			int sum = 0;
			for(int i = 0; i < tam; i++)
				sum += (int) nome[i];
			nomes.pb(nome);
			num.pb(sum);
		}
		
		int ini = 0, mid = n/2, fim = n - 1;
		bool possivel = false;
		while(ini <= fim)
		{
			mid = (ini+fim)/2;
			long double sum1 = 0, sum2 = 0;
			for(int i = mid, j = 1; i >= 0; i--, j++)
				sum1 += num[i] * j;
			for(int i = mid+1, j = 1; i < n; i++, j++)
				sum2 += num[i] * j;
			
			if(fabs(sum1 - sum2) <= 0.1)
			{
				possivel = true;
				break;
			}
			if(sum1 > sum2)
				fim = mid - 1;
			else
				ini = mid + 1;
			
		}
		if(possivel)
			printf("%s\n", nomes[mid].c_str());
		else
			printf("Impossibilidade de empate.\n");
	}

	return 0;
}