#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Digito
{
public:
	int pos;
	double oleo;
	Digito(int p, double x)
	{
		pos = p;
		oleo = x;
	}
};

bool comp(const Digito &d1, const Digito &d2)
{
	if(d1.oleo != d2.oleo)
		return (d1.oleo > d2.oleo);
	else
		return (d1.pos < d2.pos);
}

int main(int argc, char *argv[])
{
	int n;
	double x;
	int cont = 1;
	while(cin >> n)
	{
		vector<Digito> num;
		for(int i = 0; i < 10; i++)
		{
			cin >> x;
			Digito d(i, x);
			num.push_back(d);
		}
		sort(num.begin(), num.end(), comp);
		cout << "Caso " << cont++ << ": ";
		
		for(int i = 0; i < n; i++)
			cout << num[i].pos;
		cout << endl;
	}
	
	return 0;
}