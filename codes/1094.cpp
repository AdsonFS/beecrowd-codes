#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(2);
	int r = 0;
	int c = 0;
	int s = 0;
	int x;
	char tipo;
	cin >> x;
	for(int i = 0; i < x; i++)
	{
		int x1;
		cin >> x1;
		cin >> tipo;
		
		if(tipo == 'R')
			r += x1;
		else if(tipo == 'C')
			c += x1;
		else if(tipo == 'S')
			s += x1;
	}
	int total = s+c+r;
	double total1 = total;
	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << "Percentual de coelhos: " << double(c/total1)*100 << " %" << endl;
	cout << "Percentual de ratos: " << double(r/total1)*100 << " %" << endl;
	cout << "Percentual de sapos: " << double(s/total1)*100 << " %" << endl;
	
	return 0;
}