#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	int soma = 0;
	cin >> n;
	for(int i = 0; i < 5; i++)
	{
		cin >> x;
		if(x == n)
			soma++;
	}
	cout << soma << endl;
	
	return 0;
}
