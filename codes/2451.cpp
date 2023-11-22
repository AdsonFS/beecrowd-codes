#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define minN 500010
#define str second
#define F first
typedef long long ll;
typedef pair<int, int> ii;


int main(int argc, char *argv[])
{
	int n, k = 0, res = 0;
	string str, aux;
	scanf("%d", &n);
	for(int p = 0; p < n ; p++)
	{
		cin >> str;
		if(p % 2 != 0)
		{
			reverse(str.begin(), str.end());
			for(int j = p*n , t = 0; j < (p + 1)*n ; j++ , t++)
				aux += str[t];
		}
		else
		{
			for(int j = p*n, t = 0; j < (p + 1)*n ; j++, t++)
				aux += str[t];
		}
		str.clear();
	}
	aux += 'A';
	int tam = aux.size() - 1;
	for(int i = 0; i < tam ; i++)
	{
		for(int l = i; l < tam; l++)
		{
			if(aux[l] == 'A')
				break;

			if(aux[l] == 'o')
				k++;
			if(aux[l + 1] == 'A' || aux[l] == '\0')
			{
				res = max(res, k);
				k = 0;
			}
			if(aux[l] == '\0')
				break;
		}
	}
	printf("%d\n", res);
	return 0;
}
