#include <iostream>
#include <cstring>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	cin.ignore();
	char dieta[30];
	char cafe[30];
	char almo[30];
	
	for(int k = 0; k < n; k++)
	{
		cin.getline(dieta, 30);
		cin.getline(cafe, 30);
		cin.getline(almo, 30);
		set<char> die, cop;
		bool ok = true;
		int tam = strlen(dieta);
		for(int i = 0; i < tam; i++)
		{
			die.insert(dieta[i]);
			cop.insert(dieta[i]);
		}
		tam = strlen(cafe);
		
		for(int i = 0; i < tam; i++)
		{
			if(find(cop.begin(), cop.end(), cafe[i]) != cop.end())
			{
				if(find(die.begin(), die.end(), cafe[i]) != die.end())
					die.erase(find(die.begin(), die.end(), cafe[i]));
			}
			else
			{
				ok = false;
				break;
			}
		}
		if(ok)
		{
			tam = strlen(almo);
			for(int i = 0; i < tam; i++)
			{
				if(find(cop.begin(), cop.end(), almo[i]) != cop.end())
				{
					if(find(die.begin(), die.end(), almo[i]) != die.end())
						die.erase(find(die.begin(), die.end(), almo[i]));
				}
				else
				{
					ok = false;
					break;
				}
			}
		}
		if(ok)
		{
			set<char>::iterator it;
			for(it = die.begin(); it != die.end(); it++)
			{
				cout << *it;
			}
			cout << endl;
		}
		else
			cout << "CHEATER\n";
	}
	
	return 0;
}