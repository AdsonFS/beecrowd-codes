#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(1);

	int i1[5], p1[5];
	int x;
	int p = 0, i = 0;
	for(int k = 0; k < 15; k++)
	{
		cin >> x;
		if(x % 2 == 0)
		{
			p1[p] = x;
			p++;
		}
		else
		{
			i1[i] = x;
			i++;
		}
		if(i == 5)
		{
			for(int m = 0; m < i; m++)
				cout << "impar[" << m << "] = " << i1[m] << endl;
			i = 0;
		}
		if(p == 5)
		{
			for(int m = 0; m < p; m++)
				cout << "par[" << m << "] = " << p1[m] << endl;
			p = 0;
		}
	}
	for(int m = 0; m < i; m++)
		cout << "impar[" << m << "] = " << i1[m] << endl;
	for(int m = 0; m < p; m++)
		cout << "par[" << m << "] = " << p1[m] << endl;
	

	return 0;
}
