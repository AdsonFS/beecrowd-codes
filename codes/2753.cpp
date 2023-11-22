#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int x = 97;
	for(int i = 0; i < strlen(a); i++)
		cout << x++ << " e " << a[i] << endl; 
	
	return 0;
}