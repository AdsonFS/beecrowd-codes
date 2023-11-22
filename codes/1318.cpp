#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int x1, x2, x;
	
	while(cin >> x1 >> x2 && (x1+x2) != 0)
	{
		set<int> num;
		vector<int> c;
		int cont = 0;
		int tam = 0;
		for(int i = 0; i < x2; i++)
		{
			cin >> x;
			num.insert(x);
			c.push_back(x);
		}
		sort(c.begin(), c.end());
		set<int>::iterator it = num.begin();
		int i = 0;
		int ax = c[0];
		while(i < x2)
		{
			if(c[i] == *it && it != num.end())
			{
				it++;
				ax = c[i];
			}
			else if(c[i] == ax)
			{
				cont++;
				ax = -1;
			}
			i++;
		}
		
		cout << cont << endl;
	}
	
	return 0;
}