#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	// 1
	for(int i = 0; i < 39; i++)
		cout << "-";
	cout << endl;
	
	// 2
	cout << "|x = 35";
	for(int i = 0; i < 31; i++)
		cout << " ";
	cout << "|\n";
	
	// 3
	cout << "|";
	for(int i = 0; i < 37; i++)
		cout << " ";
	cout << "|\n";
	
	// 4
	cout << "|";
	for(int i = 0; i < 15; i++)
		cout << " ";
	cout << "x = 35";
	for(int i = 0; i < 16; i++)
		cout << " ";
	cout << "|\n";
	
	// 5
	cout << "|";
	for(int i = 0; i < 37; i++)
		cout << " ";
	cout << "|\n";
	
	// 6
	cout << "|";
	for(int i = 0; i < 31; i++)
		cout << " ";
	cout << "x = 35|\n";
	
	// 7
	for(int i = 0; i < 39; i++)
		cout << "-";
	cout << endl;
	
	
	return 0;
}