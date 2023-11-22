#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n1, n2, x;
	int vet[100][100];
	int c = 0, l = 0;
	
	cin >> n1 >> n2;
	
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
			cin >> vet[i][j];
	}
	
	for(int i = 0; i < n1; i++)
	{
		x = 0;
		for(int j = 0; j < n2; j++)
		{
			x += vet[i][j];
		}
		if(x > l)
			l = x;
	}
	
	for(int i = 0; i < n2; i++)
	{
		x = 0;
		for(int j = 0; j < n1; j++)
		{
			x += vet[j][i];
		}
		if(x > c)
			c = x;
	}
	
	if(l > c || l == c)
		cout << l << endl;
	else if(l < c)
		cout << c << endl;
	
	return 0;
}