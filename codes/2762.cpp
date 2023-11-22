#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	string str;
	cin >> str;
	int t = str.find(".");
	int tam = str.size();
	int x1 = 0, x2 = 0, h = 1;
	for(int i = t-1; i >= 0; i--)
	{
		x1 += (str[i] - '0') * h;
		h = h*10;
	}
	h = 1;
	for(int i = tam-1; i > t; i--)
	{
		x2 += (str[i] - '0') * h;
		h = h*10;
	}
	cout << x2 << "." << x1 << endl;
	
	return 0;
}