#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXN 500010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	getchar();
	for(int k = 0; k < n; k++)
	{
		string vet, aux;
		getline(cin, vet);
		vector<string> num;
		int tam = vet.size();
		for(int i = 0; i < tam; i++)
		{
			if(vet[i] != ' ')
				aux += vet[i];
			else
			{
				num.pb(aux);
				aux.clear();
			}
		}
		tam = aux.size();
		if(tam > 0)
			num.pb(aux);
		
		sort(num.begin(), num.end());
		tam = num.size();
		printf("%s", num[0].c_str());
		for(int i = 1; i < tam; i++)
			if(num[i] != num[i-1])
				printf(" %s", num[i].c_str());
		printf("\n");
	}
	
	return 0;
}