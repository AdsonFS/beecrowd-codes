#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int x1, x2, m;
	string str;
	while(cin >> x1 >> x2 && (x1+x2) != 0)
	{
		m = x1 + x2;
		int i = 0;
		str = to_string(m);
		
		while(true)
		{
		    if(str[i] == '\0')
		        break;
			if(str[i] != '0')
				cout << str[i];
			i++;
		}
		cout << endl;
	}
	
	return 0;
}
