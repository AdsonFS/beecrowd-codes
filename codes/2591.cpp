#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int c;
	string poder;
	cin >> c;
	
	for(int i = 0; i < c; i++)
	{
		cin >> poder;
		int x = poder.find("m") - 1;
		int y = poder.size() - 3 - poder.find("k");
		cout << "k";
		for(int i = 0; i < y*x; i++)
			cout << "a";
		cout << endl;
	}
	
	return 0;
}