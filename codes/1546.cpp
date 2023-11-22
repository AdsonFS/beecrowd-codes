#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, k, x;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> k;
		for(int j = 0; j < k; j++)
		{
			cin >> x;
			switch(x)
			{
			case 1: cout << "Rolien\n"; break;
			case 2: cout << "Naej\n"; break;
			case 3: cout << "Elehcim\n"; break;
			case 4: cout << "Odranoel\n"; break;
			}
		}
	}
	
	return 0;
}