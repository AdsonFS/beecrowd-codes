#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	int vet[1001];
	int cont = 1;
	vector<int> num;
	scanf("%d", &n);
	int k, atual;
	k = -1;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &vet[i]);
		atual = vet[i] - vet[i - 1];
		if(i > 1)
		{
			if(atual != k)
			{
				cont++;
				k = atual;
			}
		}
		else
			k = vet[1] - vet[0];
	}
	printf("%d\n", cont);
	return 0;
}
