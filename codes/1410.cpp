#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int x1, x2, x3;
	
	while(cin >> x1 >> x2 && (x1+x2) != 0)
	{
		vector<int> ata, def;
		for(int i = 0; i < x1; i++)
		{
			cin >> x3;
			ata.push_back(x3);
		}
		for(int i = 0; i < x2; i++)
		{
			cin >> x3;
			def.push_back(x3);
		}
		sort(ata.begin(), ata.end());
		sort(def.begin(), def.end());
		bool imp = true;
		if(ata[0] >= def[1] || (ata[0] >= def[0] && ata[0] >= def[1]))
			imp = false;
		if(imp)
			cout << "Y\n";
		else
			cout << "N\n";
	}
	
	return 0;
}