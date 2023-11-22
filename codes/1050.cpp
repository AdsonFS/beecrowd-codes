#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int d; cin >> d;
	
	if( d == 61){ cout << "Brasilia" << endl;}
	else if( d == 71){ cout << "Salvador" << endl;}
	else if( d == 11){ cout << "Sao Paulo" << endl;}
	else if( d == 21){ cout << "Rio de Janeiro" << endl;}		
	else if( d == 32){ cout << "Juiz de Fora" << endl;}
	else if( d == 19){ cout << "Campinas" << endl;}
	else if( d == 27){ cout << "Vitoria" << endl;}
	else if( d == 31){ cout << "Belo Horizonte" << endl;}
	else { cout << "DDD nao cadastrado" << endl;}
	
	return 0;
}
