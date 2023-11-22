#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x1, maior, posicao;
	maior = 0; posicao = 0;
	
	for(int x = 1; x <= 100; x++)
	{
		cin >> x1;
		if(x1 > maior) {maior = x1; posicao = x;}
	}
	
	cout << maior << endl;
	cout << posicao << endl;
	
	return 0;
}