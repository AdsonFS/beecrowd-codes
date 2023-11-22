#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	vector<int> par, impar;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x%2 == 0)
			par.push_back(x);
		else
			impar.push_back(x);
	}
	sort(par.begin(), par.end());
	sort(impar.begin(), impar.end(), greater<int>());
	
	for(int i = 0; i < par.size(); i++)
		cout << par[i] << endl;
	for(int i = 0; i < impar.size(); i++)
		cout << impar[i] << endl;
	
	return 0;
}