#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char x1[101], x2[101], x3[101];
	cin.getline(x1,101);
	cin.getline(x2,101);
	cin.getline(x3,101);
	
	cout << x1 << x2 << x3 << endl;
	cout << x2 << x3 << x1 << endl;
	cout << x3 << x1 << x2 << endl;
	for(int i = 0; i < 10; i++)
	{
		if(i < strlen(x1))
			cout << x1[i];
		else
			break;
	}
	for(int i = 0; i < 10; i++)
	{
		if(i < strlen(x2))
			cout << x2[i];
		else
			break;
	}
	for(int i = 0; i < 10; i++)
	{
		if(i < strlen(x3))
			cout << x3[i];
		else
			break;
	}
	cout << endl;
	
	return 0;
}