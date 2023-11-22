#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char beb[101];
	int n, m;
	while(cin >> n && n != 0)
	{
		int soma = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> m;
			cin.ignore();
			cin.getline(beb, 101);
			if(strcmp(beb, "suco de laranja") == 0)
				soma += m * 120;
			else if(strcmp(beb, "morango fresco") == 0)
				soma += m * 85;
			else if(strcmp(beb, "mamao") == 0)
				soma += m * 85;
			else if(strcmp(beb, "goiaba vermelha") == 0)
				soma += m * 70;
			else if(strcmp(beb, "manga") == 0)
				soma += m * 56;
			else if(strcmp(beb, "laranja") == 0)
				soma += m * 50;
			else if(strcmp(beb, "brocolis") == 0)
				soma += m * 34;
			
		}
		if(soma < 110)
			cout << "Mais " << 110 - soma << " mg\n";
		else if(soma <= 130)
			cout << soma << " mg\n";
		else
			cout << "Menos " << soma - 130 << " mg\n";
	}
	
	return 0;
}
