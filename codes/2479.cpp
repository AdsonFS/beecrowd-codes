#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	int b = 0;
	cin >> n;
	string str;
	char op;
	vector<string> nome;
	for(int i = 0; i < n; i++)
	{
		cin >> op >> str;
		nome.push_back(str);
		if(op == '+')
			b++;
	}
	sort(nome.begin(), nome.end());
	for(int i = 0; i < n; i++)
	{
		cout << nome[i] << endl;
	}
	cout << "Se comportaram: " << b << " | Nao se comportaram: " << n - b << endl;
	
	return 0;
}