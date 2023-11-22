#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char vet[410][410];
bool vis[410][410];
int m, n;
long long int cont = 0;

long long int busca(int i, int j)
{
	cont++;
	vis[i][j] = true;
	if(i - 1 >= 0 && vet[i-1][j] == 'C' && !vis[i-1][j])
		busca(i - 1, j);
	if(i + 1 < m && vet[i+1][j] == 'C' && !vis[i+1][j])
		busca(i + 1, j);
	if(j - 1 >= 0 && vet[i][j-1] == 'C' && !vis[i][j-1])
		busca(i, j - 1);
	if(j + 1 < n && vet[i][j+1] == 'C' && !vis[i][j+1])
		busca(i, j + 1);
	return cont;
}

int main(int argc, char *argv[])
{
	vector<int> num;
	num.push_back(0);
	cin >> m >> n;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> vet[i][j];
			vis[i][j] = false;
		}
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(vet[i][j] == 'C' && !vis[i][j])
			{
				cont = 0;
				num.push_back(busca(i, j));
			}
		}
	}
	sort(num.begin(), num.end());
	cout << num[num.size() - 1] << endl;
	
	return 0;
}