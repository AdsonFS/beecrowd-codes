#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	string str;
	string ref = "NLSO";
	
	while(cin >> n && n != 0)
	{
		cin >> str;
		int p = 0;
		for(int i = 0; i < n; i++)
		{
			if(str[i] == 'D')
				p++;
			else
				p--;
			if(p < 0)
				p = 3;
			else if(p > 3)
				p = 0;
		}
		cout << ref[p] << endl;
	}
	
	return 0;
}