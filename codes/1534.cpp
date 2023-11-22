#include <iostream>
#include <iomanip>
using namespace std;

void mat(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == n-j-1)
				cout << 2;
			else if(i == j)
				cout << 1;
			else
				cout << 3;
		}
		cout << endl;
	}
}

int main(int argc, char *argv[])
{
	int n;
	
	while(cin >> n)
	{
		mat(n);
	}
	
	return 0;
}