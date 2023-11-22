#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int c, n, x;
	scanf("%d", &c);
	for(int i = 0; i < c; i++)
	{
		scanf("%d", &n);
		vector<int> num;
		int soma = 0;
		int cont = 0;
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &x);
			soma += x;
			num.push_back(x);
		}
		double media = (double)soma/n;
		for(int j = 0; j < n; j++)
		{
			if(num[j] > media)
				cont++;
		}
		
		double m = (double) (100.0/n) * cont;
		printf("%.3f%%\n", m);
	}
	
	return 0;
}