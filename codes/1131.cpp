#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int i = 0, g = 0, e = 0;
	int x1, x2, x;
	int cont = 0;
	do
	{
		cont++;
		cin >> x1 >> x2;
		if(x1 == x2)
			e++;
		else if(x1 > x2)
			i++;
		else
			g++;
		cout << "Novo grenal (1-sim 2-nao)\n";
		cin >> x;
	}while(x == 1);
	cout << cont << " grenais\n";
	cout << "Inter:" << i << endl;
	cout << "Gremio:" << g << endl;
	cout << "Empates:" << e << endl;
	if(i > g)
		cout << "Inter venceu mais\n";
	else if(g > i)
		cout << "Gremio venceu mais\n";
	else
		cout << "Nao houve vencedor\n";
	return 0;
}