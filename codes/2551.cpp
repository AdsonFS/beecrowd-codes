#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int x1, x2, n;
	while(cin >> n)
	{
		int dia = 1;
		double maior = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> x1 >> x2;
			if((double)x2/x1 > maior)
			{
				cout << dia << endl;
				maior = (double)x2/x1;
			}
			dia++;
		}		
		
	}
	
	
	return 0;
}