#include <iostream>
#include <cstring>
using namespace std;

int d = 1, e = 1, c = 1, b = 1;
bool di = true, es = false, ci = false, ba = false, ok = true;
int cont = 0;

void zerar()
{
	d = 1;
	e = 1;
	c = 1;
	b = 1;
	cont = 0;
	di = true;
	es = false;
	ci = false, ba = false;
	ok = true;
}

void pos(int &x, int &y)
{
	if(di && (cont <= d))
	{
		x++;
		cont++;
		if(cont == d)
		{
			cont = 0;
			d++;
			e++;
			di = false;
			ci = true;
		}
	}
	else if(ci && (cont <= c))
	{
		y--;
		cont++;
		if(cont == c)
		{
			cont = 0;
			c++;
			b++;
			ci = false;
			es = true;
		}
	}
	else if(es && (cont <= e))
	{
		x--;
		cont++;
		if(cont == e)
		{
			cont = 0;
			e++;
			d++;
			es = false;
			ba = true;
		}
	}
	else if(ba && (cont <= b))
	{
		y++;
		cont++;
		if(cont == b)
		{
			cont = 0;
			b++;
			c++;
			ba = false;
			di = true;
		}
	}
}

void gerarMatriz(int n, int x, int y)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == y && j == x)
				cout << "X";
			else
				cout << "O";
		}
		cout << "\n";
	}
	cout << "@\n";
	pos(x, y);
	if(!(x == (n - 1) && y == (n - 1)))
		gerarMatriz(n, x, y);

}
void finalizar(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == n - 1 && j == n - 1)
				cout << "X";
			else
				cout << "O";
		}
		cout << endl;
	}
	cout << "@\n";
	zerar();
}

int main(int argc, char *argv[])
{
	int n;

	while(cin >> n && n != 0)
	{
		if(n == 1)
			cout << "X\n@\n";
		else
		{
			gerarMatriz(n, n / 2, n / 2);
			finalizar(n);
		}
	}

	return 0;
}
