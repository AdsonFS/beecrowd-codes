#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char x[10];
	char um[] = "one";
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		int e = 0;
		if(strlen(x) == 5)
			cout << 3 << endl;
		if(strlen(x) == 3)
		{
			for(int i = 0; i < 3; i++)
			{
				if(x[i] != um[i])
					e++;
			}
			if(e <= 1)
				cout << 1 << endl;
			else
				cout << 2 << endl;
		}
	}
	
	return 0;
}
