#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(1);
	
	int x[20];
	int aux;
	
	for(int i = 0; i < 20; i++)
		cin >> x[i];
	
	for(int i = 0; i < 10; i++)
	{
		aux = x[i];
		x[i] = x[19-i];
		x[19-i] = aux;
	}
	
	for(int i = 0; i < 20; i++)
		cout << "N[" << i << "] = " << x[i] << endl;
	
	return 0;
}