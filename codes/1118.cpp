#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	double media, v;
	do
	{
		bool ok = false;
		media = 0;
		do
		{
			if(ok)
				cout << "nota invalida\n";
			cin >> v;
			ok = true;
		}while(!(v >= 0 && v <= 10));
		media += v;
		ok = false;
		do
		{
			if(ok)
				cout << "nota invalida\n";
			cin >> v;
			ok = true;
		}while(!(v >= 0 && v <= 10));
		media += v;
		media = (double)media/2;
		cout << "media = " << media << endl;
		do
		{
			cout << "novo calculo (1-sim 2-nao)\n";
			cin >> v;
		}while(!((v == 1) || (v == 2)));
		
	}while(v != 2);
		
	return 0;
}
