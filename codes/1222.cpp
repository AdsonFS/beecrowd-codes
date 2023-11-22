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

int main(int argc, char *argv[])
{
	int n, l, c;
	while(scanf("%d%d%d", &n, &l, &c) != EOF)
	{
		int linhas = 1;
		int cont = 0, sum = 0;
		string str;
		for(int i = 0; i < n; i++)
		{
			// a e i o u
			cin >> str;
			int tam = str.size();
			if(i < n-1)
				tam++;
			cont += tam;
			sum += tam;
			
			if(cont == c || (cont == c + 1 && i != n - 1))
			{
				cont = 0;
				if(i < n-1)
					linhas++;
			}
			else if(cont > c)
			{
				cont = tam;
				linhas++;
			}
		}
		if((double)linhas/l - (int)linhas/l < 0.001)
			linhas = (int)linhas/l;
		else
			linhas = (int)(linhas/l) + 1;
		
		printf("%d\n", linhas);
	}
	
	return 0;
}