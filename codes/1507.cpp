#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	int t, n;
	int tam;
	string str;
	string aux;
	scanf("%d", &t);
	for(int j = 0; j < t; j++)
	{
		cin >> str;
		tam = str.size();	
		scanf("%d", &n);
		for(int k = 0; k < n; k++)
		{
			cin >> aux;
			int fim = aux.size();
			int p = 0;
			for(int i = 0; i < tam; i++)
			{
				if(aux[p] == str[i])
					p++;
			}
			if(p == fim)
				printf("Yes\n");
			else
				printf("No\n");
		}		
	}
	
	return 0;
}
