#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	
	while(cin >> n && n != 0)
	{
		vector<int> m, l;
		int mark = 0;
		int leti = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			mark += x;
			m.push_back(x);
		}
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			leti += x;
			l.push_back(x);
		}
		int pm = 20;
		int pl = 20;
		bool aj1 = true;
		for(int i = 1; i < n-1; i++)
		{
			if(m[i-1] == m[i] && m[i] == m[i+1] && aj1)
			{
				pm = i-1;
				aj1 = false;
			}
			if(l[i-1] == l[i] && l[i] == l[i+1])
			{
				pl = i-1;
				break;
			}
		}
		if(pm < pl)
			mark += 30;
		else if(pl < pm)
			leti += 30;
		
		if(mark > leti)
			cout << "M\n";
		else if(leti > mark)
			cout << "L\n";
		else
			cout << "T\n";
	}
	
	return 0;
}