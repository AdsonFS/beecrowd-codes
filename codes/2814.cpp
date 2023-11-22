#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main(int argc, char *argv[])
{
	int n, k, j;
	scanf("%d", &n);
	for(int p = 0; p < n; p++)
	{
		char vet[35][35];
		scanf("%d%d", &k, &j);
		int x1, x2, y1, y2;
		for(int i = 0; i < j; i++)
		{
			cin >> vet[i];
		}
		for(int i = 0; i < j; i++)
		{
			for(int l = 0; l < strlen(vet[i]); l++)
			{
				if(vet[i][l] == 'F')
				{
					x1 = i;
					y1 = l;
				}
				else if(vet[i][l] == 'J')
				{
					x2 = i;
					y2 = l;
				}
			}
		}
		int dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)) * 10;
	//	dist -= 10;
		int aux = k;
		while(true)
		{
			int perda = aux * pow(0.99, dist);
			if(perda >= k)
				break;
			aux++;
		}
		aux--;
		printf("%d dBs\n", aux);
	}
	
	return 0;
}
