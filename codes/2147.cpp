#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	int n;
	char galopeira[100000];
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> galopeira;
		int tam = strlen(galopeira);
		cout << tam*0.01 << endl;
	}


	return 0;
}
