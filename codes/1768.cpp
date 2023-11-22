#include <iostream>
#include <cstring>
using namespace std;

void gerarTopo(int n, int x)
{
	int dif = (n-x) / 2;
	for(int i = 0; i < dif; i++)
		cout << " ";
	for(int i = 0; i < x; i++)
		cout << "*";
	cout << endl;
	x += 2;
	if(x <= n)
		gerarTopo(n, x);
}

void gerarBase(int n)
{
	int meio = (n/2);
	for(int i = 0; i < meio; i++)
		cout << " ";
	cout << "*\n";
	for(int i = 0; i < meio-1; i++)
		cout << " ";
	cout << "***\n";
}

int main(int argc, char *argv[])
{
	int n;
	
	while(cin >> n)
	{
		gerarTopo(n, 1);
		gerarBase(n);
		cout << endl;
	}
	
	return 0;
}