#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(4);
	
	int n;
	int menor;
	int posicao;
	cin >> n;
	int x[n];
	cin >> x[0];
	menor = x[0];
	for(int i = 1; i < n; i++)
	{
		cin >> x[i];
		if(x[i] < menor)
		{
			menor = x[i];
			posicao = i;
		}
	}
	
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << posicao << endl;
	
	return 0;
}