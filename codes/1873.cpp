#include <iostream>
using namespace std;

void resultado(string str1, string str2)
{
	if(str1 == str2)
		cout << "empate\n";
	
	else if(str1 == "tesoura" && str2 == "papel")
		cout << "rajesh\n";
	else if(str2 == "tesoura" && str1 == "papel")
		cout << "sheldon\n";
	
	else if(str1 == "papel" && str2 == "pedra")
		cout << "rajesh\n";
	else if(str1 == "pedra" && str2 == "papel")
		cout << "sheldon\n";
	
	else if(str1 == "pedra" && str2 == "lagarto")
		cout << "rajesh\n";
	else if(str1 == "lagarto" && str2 == "pedra")
		cout << "sheldon\n";
	
	else if(str1 == "lagarto" && str2 == "spock")
		cout << "rajesh\n";
	else if(str1 == "spock" && str2 == "lagarto")
		cout << "sheldon\n";
	
	else if(str1 == "spock" && str2 == "tesoura")
		cout << "rajesh\n";
	else if(str1 == "tesoura" && str2 == "spock")
		cout << "sheldon\n";
	
	else if(str1 == "tesoura" && str2 == "lagarto")
		cout << "rajesh\n";
	else if(str1 == "lagarto" && str2 == "tesoura")
		cout << "sheldon\n";
	
	else if(str1 == "lagarto" && str2 == "papel")
		cout << "rajesh\n";
	else if(str1 == "papel" && str2 == "lagarto")
		cout << "sheldon\n";
	
	else if(str1 == "papel" && str2 == "spock")
		cout << "rajesh\n";
	else if(str1 == "spock" && str2 == "papel")
		cout << "sheldon\n";
	
	else if(str1 == "spock" && str2 == "pedra")
		cout << "rajesh\n";
	else if(str1 == "pedra" && str2 == "spock")
		cout << "sheldon\n";
	
	else if(str1 == "pedra" && str2 == "tesoura")
		cout << "rajesh\n";
	else if(str1 == "tesoura" && str2 == "pedra")
		cout << "sheldon\n";
}

int main(int argc, char *argv[])
{
	int n;
	string str1, str2;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> str1 >> str2;
		resultado(str1, str2);
	}
	
	return 0;
}