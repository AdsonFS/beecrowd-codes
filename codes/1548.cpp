#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int n, t, x;
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		cin >> t;
		vector<int> num, st;
		int cont = 0;
		for(int i = 0; i < t; i++)
		{
			cin >> x;
			num.push_back(x);
			st.push_back(x);
		}
		sort(st.begin(), st.end(), greater<int>());
		for(int i = 0; i < t; i++)
		{
			if(st[i] == num[i])
				cont++;
		}
		cout << cont << endl;
	}
	
	return 0;
}
