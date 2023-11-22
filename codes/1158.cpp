#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x1, x2;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> x1 >> x2;
		if(x1%2 == 0)
			x1++;
		int aux = x1;
		for(int k = 0; k < x2-1; k++)
		{
			aux += 2;
			x1 += aux;
			
		}
		cout << x1 << endl;
	}
	
	return 0;
}