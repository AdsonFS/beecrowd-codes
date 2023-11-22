#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x1;
	string nome;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> nome >> x1;
		if(nome == "Thor")
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}
	
	return 0;
}