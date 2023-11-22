#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char txt[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cout << txt[i];
	}
	cout << endl;
	return 0;
}