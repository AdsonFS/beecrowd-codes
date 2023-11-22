#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	set<string> set_str;
	string ss;
	for(int i = 0; i < n; i++)
	{
		cin >> ss;
		set_str.insert(ss);
	}
	int x = 151 - set_str.size();
	cout << "Falta(m) " << x << " pomekon(s).\n";
	
	return 0;
}