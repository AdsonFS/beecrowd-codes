#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	int g;
	int e1, e2, e3;
	char t1, t2;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		e1 = 0; e2 = 0; e3 = 0;
		cin >> g;
		for(int i = 0; i < g; i++)
		{
			cin >> t1 >> t2;
			if(t1 == 'B' && t2 == 'G')
				e1++;
			else if(t1 == 'B' && t2 == 'R')
				e1 += 2;
			if(t1 == 'R' && t2 == 'B')
				e2++;
			else if(t1 == 'R' && t2 == 'G')
				e2 += 2;
			if(t1 == 'G' && t2 == 'R')
				e3++;
			else if(t1 == 'G' && t2 == 'B')
				e3 += 2;
		}
		if(e1 == e2 && e1 == e3)
			cout << "trempate\n";
		else if(e1 > e2 && e1 > e3)
			cout << "blue\n";
		else if(e2 > e1 && e2 > e3)
			cout << "red\n";
		else if(e3 > e2 && e3 > e1)
			cout << "green\n";
		else
			cout << "empate\n";
	}
	
	return 0;
}
