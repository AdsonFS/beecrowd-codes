#include <iostream>
#include <cstring>
using namespace std;

int acharR(string str)
{
	int h = 1;
	int num = 0;
	int fim = str.find("+") - 1;
	
	for(int i = fim; i >= 0 ; i--)
	{
		num += ( (str[i] - '0') * h);
		h = h*10;
	}
	return num;
}

int acharL(string str)
{
	int h = 1;
	int num = 0;
	int ini = str.find("+");
	int fim = str.find("=") - 1;
	
	for(int i = fim; i > ini ; i--)
	{
		num += ( (str[i] - '0') * h);
		h = h*10;
	}
	return num;
}

int acharJ(string str)
{
	int h = 1;
	int num = 0;
	int ini = str.find("=");
	int fim = str.size() - 1;
	for(int i = fim; i > ini ; i--)
	{
		num += ( (str[i] - '0') * h);
		h = h*10;
	}
	return num;
}

int main(int argc, char *argv[])
{
	string str;
	int r, l, j;
	while(cin >> str)
	{
		r = acharR(str);
		l = acharL(str);
		j = acharJ(str);
		if(str.find("R") != -1)
			cout << j - l << endl;
		else if(str.find("L") != -1)
			cout << j - r << endl;
		else
			cout << r + l << endl;
	}
	
	return 0;
}
