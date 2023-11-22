#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x, atual;
	cin >> n;
	cin >> x;
	atual = x;
	bool okq = true, okw = true;
	bool cim = true, bai = true;
	for(int i = 1; i < n; i++)
	{
		cin >> x;
		if(x > atual && cim)
			cim = false;
		else if(x < atual && !cim)
			cim = true;
		else
			okq = false;
		
		if(x < atual && bai)
			bai = false;
		else if(x > atual && !bai)
			bai = true;
		else
			okw = false;
		
		atual = x;
	}
	if(okq || okw)
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}