#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	
	while(cin >> n && n != 0)
	{
		vector<int> num, sup;
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			num.push_back(x);
			sup.push_back(x);
		}
		sort(sup.begin(), sup.end(), greater<int>());
		for(int i = 0; i < n; i++)
		{
			if(num[i] == sup[1])
			{
				cout << i+1 << endl;
				break;
			}
		}
	}
		
	return 0;
}