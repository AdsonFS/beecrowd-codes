#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int x = 1;

	while(cin >> x)
	{
		if(x == 0)
			break;
		int soma = 0;
		if(x % 2 == 0)
		{
			for(int i = 0; i < 5; i++)
			{
				soma += x;
				x += 2;
			}
		} else
		{
			x++;
			for(int i = 0; i < 5; i++)
			{
				soma += x;
				x += 2;
			}
		}
		
		cout << soma << endl;	
	}
	return 0;
}
