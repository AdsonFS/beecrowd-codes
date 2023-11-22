#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(2);
	double N; cin >> N;
	
	cout << "NOTAS:" << endl;
	
	int a;
	
	a = N/100;
	cout << a << " nota(s) de R$ 100.00" << endl;
	N = N - (a*100);
	
	a = N/50;
	cout << a << " nota(s) de R$ 50.00" << endl;
	N = N - (a*50);
	
	a = N/20;
	cout << a << " nota(s) de R$ 20.00" << endl;
	N = N - (a*20);
	
	a = N/10;
	cout << a << " nota(s) de R$ 10.00" << endl;
	N = N - (a*10);
	
	a = N/5;
	cout << a << " nota(s) de R$ 5.00" << endl;
	N = N - (a*5);
	
	a = N/2;
	cout << a << " nota(s) de R$ 2.00" << endl;
	N = N - (a*2);
	
	///////////////////////////////////////////////
	
	cout << "MOEDAS:" << endl;
	
	int x; N = N * 100;
	
	x = N/100;
	cout << x << " moeda(s) de R$ 1.00" << endl;
	N = N - (x*100);
	
	x = N/50;
	cout << x << " moeda(s) de R$ 0.50" << endl;
	N = N - (x*50);
	
	x = N/25;
	cout << x << " moeda(s) de R$ 0.25" << endl;
	N = N - (x*25);
	
	x = N/10;
	cout << x << " moeda(s) de R$ 0.10" << endl;
	N = N - (x*10);
	
	x = N/5;
	cout << x << " moeda(s) de R$ 0.05" << endl;
	N = N - (x*5);
	
	x = N/1;
	cout << x << " moeda(s) de R$ 0.01" << endl;
	N = N - (x*1);
	
	
	
	
	
	
	
	
	return 0;
}