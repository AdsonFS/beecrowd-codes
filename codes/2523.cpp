#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char alpha[30];
	while(cin >> alpha)
	{
		char str[10001];
		int n, x;
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			str[i] = alpha[x-1]; 
		}
		str[n] = '\0';
		cout << str << endl;
	}
	
	return 0;
}
