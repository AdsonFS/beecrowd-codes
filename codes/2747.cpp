#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	for(int i = 0; i < 39; i++)
		cout << "-";
	cout << endl;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "|";
		for(int i = 0; i < 37; i++)
		{
			cout << " ";
		}
		cout << "|\n";
	}
	
	for(int i = 0; i < 39; i++)
		cout << "-";
	cout << endl;
	
	return 0;
}