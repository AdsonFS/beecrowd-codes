#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int n, c, x;
	char seq[60];
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		vector<int> num;
		int cont = 0;
		cin >> c;
		for(int i = 0; i < c; i++)
		{
			cin >> x;
			num.push_back(x);
		}
		cin >> seq;
		for(int i = 0; i < c; i++)
		{
			if(num[i] <= 2 && seq[i] == 'S')
				cont++;
			else if(num[i] > 2 && seq[i] == 'J')
				cont++;
		}
		cout << cont << endl;
	}
	
	return 0;
}
