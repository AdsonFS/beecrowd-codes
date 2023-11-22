#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	int cont;
	cin >> n;
	cin >> x;
	cont = x;
	bool ok = true;
	for(int i = 1; i < n; i++)
	{
		cin >> x;
		if(x < cont)
		{
			cout << i+1 << endl;
			ok = false;
			break;
		}
		cont = x;
	}
	if(ok)
		cout << 0 << endl;
	
	return 0;
}