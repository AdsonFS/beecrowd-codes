#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int m;
	
	while(cin >> m)
	{
		if((m >= 0 && m < 90) || m == 360)
			cout << "Bom Dia!!\n";
		else if(m >= 90 && m < 180)
			cout << "Boa Tarde!!\n";
		else if(m >= 180 && m < 270)
			cout << "Boa Noite!!\n";
		else if(m >= 270 && m < 360)
			cout << "De Madrugada!!\n";
	}
	
	return 0;
}