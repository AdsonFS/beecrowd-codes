#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int m, q;
	int c = 1;
	while(cin >> m >> q && (m+q) != 0)
	{
		int x;
		vector<int> num, pes;
		for(int i = 0; i < m; i++)
		{
			cin >> x;
			num.push_back(x);
		}
		for(int i = 0; i < q; i++)
		{
			cin >> x;
			pes.push_back(x);
		}
		sort(num.begin(), num.end());
		bool ok;
		cout << "CASE# " << c++ << ":\n";
		for(int k = 0; k < q; k++)
		{
			ok = true;
			for(int i = 0; i < m; i++)
			{
				if(num[i] == pes[k])
				{
					cout << pes[k] << " found at " << i+1 << endl;
					ok = false;
					break;
				}
			}
			if(ok)
				cout << pes[k] << " not found\n";
		}
	}
	
	return 0;
}