#include <bits/stdc++.h>
using namespace std;
int vet[1000][1000];

int somaL(int x, int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += vet[x][i];
	return sum;
}

int somaC(int x, int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += vet[i][x];
	return sum;
}

int d1(int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{
			if(i == j)
				sum += vet[i][j];
		}
	return sum;
}

int d2(int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{
			if(j == n - i - 1)
				sum += vet[i][j];
		}
	return sum;
}

int main(int argc, char *argv[])
{
	set<int> L, C, num;
	vector<int> aux;
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> vet[i][j];
			num.insert(vet[i][j]);
			aux.push_back(vet[i][j]);
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		L.insert(somaL(i, n));
		C.insert(somaL(i, n));
	}
	bool ok = true;
	if(L.size() != 1 || C.size() != 1)
		ok = false;
	else
	{
		sort(aux.begin(), aux.end());
		for(int i = 1; i <= (n*n); i++)
		{
			if(aux[i-1] != i)
				ok = false;
		}
		int di1 = d1(n);
		int di2 = d2(n);
		int x1 = somaL(0, n);
		int x2 = somaC(0, n);
		if(((x1 + x2 + di1 + di2)/4) != di1)
			ok = false;
	}
	if(ok)
		printf("%d\n", d1(n));
	else
		printf("0\n");
	return 0;
}
