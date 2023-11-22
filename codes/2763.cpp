#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	string str;
	cin >> str;
	int tam = str.size();
	for(int i = 0; i < tam; i++)
	{
		if(str[i] == '.' || str[i] == '-')
			cout << endl;
		else
			cout << str[i];
	}
	cout << endl;
	
	return 0;
}