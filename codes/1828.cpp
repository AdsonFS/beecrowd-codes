#include <iostream>
using namespace std;

void resultado(string str1, string str2)
{
	bool ok1 = false;
	bool ok2 = false;
	
	if(str1 == str2)
		cout << "De novo!\n";
	else if(str1 == "tesoura" && str2 == "papel")
		ok1 = true;
	else if(str2 == "tesoura" && str1 == "papel")
		ok2 = true;
	
	else if(str1 == "papel" && str2 == "pedra")
		ok1 = true;
	else if(str1 == "pedra" && str2 == "papel")
		ok2 = true;
	
	else if(str1 == "pedra" && str2 == "lagarto")
		ok1 = true;
	else if(str1 == "lagarto" && str2 == "pedra")
		ok2 = true;
	
	else if(str1 == "lagarto" && str2 == "Spock")
		ok1 = true;
	else if(str1 == "Spock" && str2 == "lagarto")
		ok2 = true;
	
	else if(str1 == "Spock" && str2 == "tesoura")
		ok1 = true;
	else if(str1 == "tesoura" && str2 == "Spock")
		ok2 = true;
	
	else if(str1 == "tesoura" && str2 == "lagarto")
		ok1 = true;
	else if(str1 == "lagarto" && str2 == "tesoura")
		ok2 = true;
	
	else if(str1 == "lagarto" && str2 == "papel")
		ok1 = true;
	else if(str1 == "papel" && str2 == "lagarto")
		ok2 = true;
	
	else if(str1 == "papel" && str2 == "Spock")
		ok1 = true;
	else if(str1 == "Spock" && str2 == "papel")
		ok2 = true;
	
	else if(str1 == "Spock" && str2 == "pedra")
		ok1 = true;
	else if(str1 == "pedra" && str2 == "Spock")
		ok2 = true;
	
	else if(str1 == "pedra" && str2 == "tesoura")
		ok1 = true;
	else if(str1 == "tesoura" && str2 == "pedra")
		ok2 = true;
	
	if(ok1)
		cout << "Bazinga!\n";
	else if(ok2)
		cout << "Raj trapaceou!\n";
	
}

int main(int argc, char *argv[])
{
	int n;
	int caso = 1;
	string str1, str2;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> str1 >> str2;
		cout << "Caso #" << caso++ << ": ";
		resultado(str1, str2);
	}
	
	return 0;
}