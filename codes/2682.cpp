#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int x;
	int atual = 1;
	int erro;
	bool ok = true;
	while(cin >> x)
	{
		if(x < atual && ok)
		{
			erro = atual;
			ok = false;
		}
		else if(x < atual)
			ok = false;
		else
			atual = x;
	}
	if(!ok)
		cout << erro+1 << endl;
	else
		cout << x+1 << endl;
	
	return 0;
}