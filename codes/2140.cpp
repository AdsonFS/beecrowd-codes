#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int vet[] = {2, 5, 10, 20, 50, 100};
	int x1, x2;
	
	while(cin >> x1 >> x2 && (x1+x2) != 0)
	{
		int dif = x2 - x1;
		int cont = 0;
		for(int i = 5; i >= 0; i--)
		{
			if(dif >= vet[i])
			{
				dif -= vet[i];
				cont++;
			}
		}
		if(cont == 2 && dif == 0)
			cout << "possible\n";
		else
			cout << "impossible\n";
	}
	
	return 0;
}