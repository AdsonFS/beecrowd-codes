#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main(int argc, char *argv[])
{
	int n, b;
	
	while(cin >> n >> b && (n+b) != 0)
	{
		int vet[b];
		set<int> dif_bolas;
		
		for(int i = 0; i < b; i++)
			cin >> vet[i];
		
		for(int i = 0; i < b; i++)
		{
			for(int j = 0; j <= i; j++)
				dif_bolas.insert(fabs(vet[i] - vet[j]));
		}
		
		int tam = dif_bolas.size();
		if(tam == (n + 1))
			cout << "Y\n";
		else
			cout << "N\n";
	}
	
	return 0;
}