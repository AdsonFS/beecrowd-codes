#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n, p;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> p;
		bool ingles = false;
		string str;
		string aux;
		cin >> str;
		aux = str;
		for(int j = 1; j < p; j++)
		{
			cin >> str;
			if(str != aux)
				ingles = true;
		}
		if(ingles)
			cout << "ingles\n";
		else
			cout << aux << endl;
	}
	
	return 0;
}