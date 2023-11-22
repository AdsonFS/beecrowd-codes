#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(1);
	
	int n, x1;
	double x2;
	int mat;
	double maior;
	cin >> n;
	maior = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> x1 >> x2;
		if(x2 > maior)
		{
			maior = x2;
			mat = x1;
		}
	}
	if(maior < 8)
		cout << "Minimum note not reached\n";
	else
		cout << mat << endl;
	
	return 0;
}