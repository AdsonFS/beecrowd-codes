#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char nome1[101], nome2[101], num[2][6];
	int n, x1, x2;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		bool par = false;
		cin >> nome1 >> num[0] >> nome2 >> num[1];
		cin >> x1 >> x2;
		int soma = x1 + x2;
		if(soma % 2 == 0)
			par = true;
		
		if(strcmp(num[0], "IMPAR") == 0 && par)
			cout << nome2 << endl;
		else if(strcmp(num[0], "IMPAR") == 0 && !par)
			cout << nome1 << endl;
		if(strcmp(num[1], "IMPAR") == 0 && par)
			cout << nome1 << endl;
		else if(strcmp(num[1], "IMPAR") == 0 && !par)
			cout << nome2 << endl;
	}
	
	return 0;
}