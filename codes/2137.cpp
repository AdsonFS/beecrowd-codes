#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	set<string> str;
	string ss;
	while(cin >> n)
	{
		set<string> str;
		string ss;
		for(int i = 0; i < n; i++)
		{
			cin >> ss;
			str.insert(ss);
		}
		set<string>::iterator it;
		for(it = str.begin(); it != str.end(); it++)
			cout << *it << endl;	
	}
	
	return 0;
}