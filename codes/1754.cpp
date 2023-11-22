#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(0);
	long long int n, x1, x2;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x1 >> x2;
		long long int j = x1/x2;
		if(x2*j < x1)
			j = j + 1;
		
		if(j < 2)
			j = 2;
		cout << j << endl;
	}
	
	return 0;
}
