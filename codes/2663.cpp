#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> num;
	int x, n, c, cont;
	cont = 0;
	cin >> n >> c;
	
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		num.push_back(x);
	}
	sort(num.begin(), num.end());
	int at = -1;
	for(int i = n-1; i >= 0; i--)
	{
		cont++;
		at = num[i];
		if(cont >= c && num[i-1] != at)
			break;
	}
	cout << cont << endl;
	
	return 0;
}