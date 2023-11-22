#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	int p, n, x[100];
	bool ok = true;
	cin >> p >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	for(int i = 1; i < n; i++)
	{
		if(x[i] - x[i-1] > p || x[i] - x[i-1] < 0-p)
		{
			ok = false;
			break;
		}
	}
	if(ok)
		cout << "YOU WIN\n";
	else
		cout << "GAME OVER\n";
	return 0;
}
