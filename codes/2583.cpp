#include <iostream>
#include <cstring>
#include <set>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	string x1, x2;
	int n, p;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		set<string> str;
		set<string>::iterator it;
		cin >> p;
		for(int i = 0; i < p; i++)
		{
			cin >> x1 >> x2;
			if(x2 == "chirrin")
				str.insert(x1);
			else if(x2 == "chirrion")
			{
				if(str.find(x1) != str.end())
					str.erase(str.find(x1));
			}
		}
		cout << "TOTAL\n";
		for(it = str.begin(); it != str.end(); it++)
		{
			cout << *it << endl;
		}
	}
	
	return 0;
}
