#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int inicio, fim, jogo; cin >> inicio >> fim;
	
	if(inicio == fim)
	{
		cout << "O JOGO DUROU 24 HORA(S)" << endl;
	}else if(inicio < fim)
	{
		cout << "O JOGO DUROU " << (fim-inicio) << " HORA(S)" << endl;
	}else if(inicio > fim)
	{
		cout << "O JOGO DUROU " << 24-(inicio-fim) << " HORA(S)" << endl;
	}
	
	return 0;
}