#include <iostream>
#include <set>
using namespace std;

bool verificarLinha(char vet[9][9], int i)
{
	set<char> num;
	
	for(int j = 0; j < 9; j++)
		num.insert(vet[i][j]);
	int tam = num.size();
	i++;
	if(tam == 9 && i < 8)
		return verificarLinha(vet, i);
	if(tam == 9 && i == 8)
		return true;
	return false;
}

bool verificarColuna(char vet[9][9], int j)
{
	set<char> num;
	
	for(int i = 0; i < 9; i++)
		num.insert(vet[i][j]);
	
	int tam = num.size();
	j++;
	if(tam == 9 && j < 8)
		return verificarColuna(vet, j);
	if(tam == 9 && j == 8)
		return true;
	return false;
}

bool bloco(char vet[9][9], int x, int y)
{
	set<char> num;
	
	for(int i = x-3; i < x; i++)
	{
		for(int j = y-3; j < y; j++)
			num.insert(vet[i][j]);
	}
	int tam = num.size();
	
	if(tam == 9)
		return true;
	return false;
}

int main(int argc, char *argv[])
{
	int n;
	int k = 0;
	cin >> n;
	for(int p = 0; p < n; p++)
	{
		char vet[9][9];
		bool sudoku = false;
		for(int i = 0; i < 9; i++)
		{
			for(int j = 0; j < 9; j++)
				cin >> vet[i][j];
		}
		cout << "Instancia " << ++k << endl;
		if(verificarLinha(vet, 0))
		{
			if(verificarColuna(vet, 0))
				if(bloco(vet, 3, 3) && bloco(vet, 3, 6) && bloco(vet, 3, 9))
					if(bloco(vet, 6, 3) && bloco(vet, 6, 6) && bloco(vet, 6, 9))
						if(bloco(vet, 9, 3) && bloco(vet, 9, 6) && bloco(vet, 9, 9))
							sudoku = true;
		}
		if(sudoku)
			cout << "SIM\n\n";
		else
			cout << "NAO\n\n";
	}
	
	return 0;
}