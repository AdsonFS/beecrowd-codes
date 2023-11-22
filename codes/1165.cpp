#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	cin >> n;
	bool primo;
	for(int j = 0; j < n; j++)
	{
		cin >> x;
		primo = true;
		for(int i = 2; i < x; i++)
		{
			if(x%i == 0)
			{
				primo = false;
				break;
			}
		}
		if(primo)
			cout << x << " eh primo" << endl;
		else
			cout << x << " nao eh primo" << endl;
	}
	
	return 0;
}