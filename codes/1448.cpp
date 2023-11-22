#include <iostream>
#include <cstring>
using namespace std;

char orig[101];
char txt1[101];
char txt2[101];

int comparar(int tam)
{
	int x1 = 0, x2 = 0;
	int pos = -1;
	bool flag = true;
	for(int i = 0; i < tam; i++)
	{
		bool ok1 = false, ok2 = false;
		if(txt1[i] == orig[i])
		{
			x1++;
			ok1 = true;
		}
		if(txt2[i] == orig[i])
		{
			x2++;
			ok2 = true;
		}
		if((ok1 && !ok2) && flag)
		{
			pos = 1;
			flag = false;
		}
		else if((ok2 && !ok1) && flag)
		{
			pos = 2;
			flag = false;
		}
	}
	if(x1 > x2)
		return 1;
	if(x2 > x1)
		return 2;
	if(pos == 1)
		return 1;
	if(pos == 2)
		return 2;
	return 0;
}

void ler()
{
	cin.getline(orig, 101); cin.getline(txt1, 101); cin.getline(txt2, 101);
}
int main(int argc, char *argv[])
{
	int n, x, inst = 1;
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		ler();
		x = comparar(strlen(orig));
		if(x == 1)
		{
			cout << "Instancia " << inst++ << endl;
			cout << "time 1\n";
		}
		else if(x == 2)
		{
			cout << "Instancia " << inst++ << endl;
			cout << "time 2\n";
		}
		else
		{
			cout << "Instancia " << inst++ << endl;
			cout << "empate\n";
		}
		cout << endl;
	}
	
	return 0;
}
