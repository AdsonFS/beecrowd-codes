#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char placa[101];
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> placa;
		string dia = "FAILURE";
		bool ok = true;
		if(!(placa[0] >= 'A' && placa[0] <= 'Z' && placa[1] >= 'A' && placa[1] <= 'Z' && placa[2] >= 'A' && placa[2] <= 'Z' && placa[3] == '-' && strlen(placa) == 8))
		{
			cout << "FAILURE\n";
		}
		else
		{
			for(int i = 4; i < 8; i++)
			{
				if(!(placa[i] >= '0' && placa[i] <= '9'))
					ok = false;
			}

			if(ok)
			{
				if(placa[7] == '1' || placa[7] == '2')
					dia = "MONDAY";
				else if(placa[7] == '3' || placa[7] == '4')
					dia = "TUESDAY";
				else if(placa[7] == '5' || placa[7] == '6')
					dia = "WEDNESDAY";
				else if(placa[7] == '7' || placa[7] == '8')
					dia = "THURSDAY";
				else if(placa[7] == '0' || placa[7] == '9')
					dia = "FRIDAY";
			}
			if(ok)
				cout << dia << endl;
			else
				cout << "FAILURE\n";
		}
	}
	return 0;
}
