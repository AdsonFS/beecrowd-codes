#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x, y, b;

	while(cin >> n)
	{
		vector<int> num, seq;
		for(int i = 0; i < n; i++)
		{
			cin >> x >> y;
			for(int j = x; j <= y; j++)
				num.push_back(j);
		}
		cin >> b;
		
		sort(num.begin(), num.end());
		bool achou = false;
		int tam = num.size();
		for(int i = 0; i < tam; i++)
		{
			if(num[i] == b)
			{
				seq.push_back(i);
				achou = true;
			}
			else if(achou)
				break;
		}
		if(achou)
			cout << b << " found from " << seq[0] << " to " << seq[seq.size() - 1] << endl;
		else
			cout << b << " not found\n";
	}

	return 0;
}