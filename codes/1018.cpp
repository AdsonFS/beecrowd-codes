#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int x; cin >> x;
	
	cout << x << endl;
	
	int a = x/100;
	cout << a << " nota(s) de R$ 100,00" << endl;
	x = x - (a*100);
	
	a = x/50;
	cout << a << " nota(s) de R$ 50,00" << endl;
	x = x - (a*50);
	
	a = x/20;
	cout << a << " nota(s) de R$ 20,00" << endl;
	x = x - (a*20);
	
	a = x/10;
	cout << a << " nota(s) de R$ 10,00" << endl;
	x = x - (a*10);
	
	a = x/5;
	cout << a << " nota(s) de R$ 5,00" << endl;
	x = x - (a*5);
	
	a = x/2;
	cout << a << " nota(s) de R$ 2,00" << endl;
	x = x - (a*2);
	
	a = x/1;
	cout << a << " nota(s) de R$ 1,00" << endl;
	//x = x - (a*1);
	
	return 0;
}