#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int n, vet[1000];
	cin >> n;
	
	for(int i = 0; i < n-1; i++)
		cin >> vet[i];
		
	sort(vet, vet+n-1);
	
	for(int i = 1; i <= n; i++)
	{
		if(vet[i-1] != i)
		{
			cout << i << endl;
			break;
		}
	}
	
	return 0;
}