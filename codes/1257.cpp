#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n, l;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &l);
		string str[105];
		for(int j = 0; j < l; j++)
			cin >> str[j];
		int cont = 0;
		for(int j = 0; j < l; j++)
		{
			int tam = str[j].size();
			for(int k = 0; k < tam; k++)
			{
				char c = str[j][k];
				cont += alpha.find(c);
				cont += j + k;
			}
		}
		
		printf("%d\n", cont);
	}
	
	return 0;
}
