#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void verificar(string &str)
{
	if(str[0] == 'O' && str[1] == 'B')
		str = "OBI";
	else if(str[0] == 'U' && str[1] == 'R')
		str = "URI";
}

int main(int argc, char *argv[])
{
	int n;
	vector<string> ss;
	string str;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> str;
		if(str.size() == 3)
			verificar(str);
		ss.push_back(str);
	}
	for(int i = 0; i < n-1; i++)
		cout << ss[i] << " ";
	cout << ss[n-1] << endl;
	
	return 0;
}
