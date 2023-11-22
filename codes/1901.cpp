#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x1, x2;
	int vet[210][210];
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
			cin >> vet[i][j];
	}
	set<int> num;
	for(int i = 0; i < 2*n; i++)
	{
		cin >> x1 >> x2;
		num.insert(vet[x1][x2]);
	}
	int tam = num.size();
	cout << tam << endl;
	
	return 0;
}