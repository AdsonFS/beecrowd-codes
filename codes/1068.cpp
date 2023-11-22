#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char vet[1001];
	
	while(!cin.getline(vet, 1001).eof())
	{
		bool ok = true;
		int a = 0, f = 0;
		for(int i = 0; i < strlen(vet); i++)
		{
			if(vet[i] == '(')
				a++;
			else if(vet[i] == ')' && f < a)
				f++;
			else if(vet[i] == ')')
			{
				ok = false;
				break;
			}
		}
		if(ok && a == f)
			cout << "correct\n";
		else
			cout << "incorrect\n";
	}
	
	return 0;
}
