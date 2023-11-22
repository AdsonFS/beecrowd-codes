#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int n, q, x;
	while(cin >> n >> q)
	{
		vector<int> num, c;
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			num.push_back(x);
		}
		sort(num.begin(), num.end(), greater<int>());
		for(int i = 0; i < q; i++)
		{
			cin >> x;
			c.push_back(x);
		}
		for(int i = 0; i < q; i++)
			cout << num[c[i]-1] << endl;
	}
	
	return 0;
}
