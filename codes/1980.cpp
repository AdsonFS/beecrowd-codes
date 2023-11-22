#include <iostream>
#include <cstring>
using namespace std;

long long int fat(int x)
{
	long long int y = 1;
	if(x == 1)
		return 1;
	for(int i = 2; i <= x; i++)
		y = (long long int) y * i;
	
	return y;
}

int main(int argc, char *argv[])
{
	char ana[20];
	
	while(cin >> ana)
	{
		if(strcmp(ana, "0") == 0)
			break;
		long long int tam = strlen(ana), e;
		e = (long long int)fat(tam);
		cout << e << endl;
	}
	
	return 0;
}
