#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x, maior;
	
	while(cin >> n)
	{
		maior = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			if(x > maior)
				maior = x;
		}
		if(maior < 10)
			cout << 1 << endl;
		if(maior >= 10 && maior < 20)
			cout << 2 << endl;
		if(maior > 20)
			cout << 3 << endl;
	}
	
	return 0;
}