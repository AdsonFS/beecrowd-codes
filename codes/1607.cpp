#include <iostream>
#include <cstring>
using namespace std;

string alpha = "abcdefghijklmnopqrstuvwxyz";
string x1, x2;

int mover(int tam)
{
	int cont = 0;
	for(int i = 0; i < tam; i++)
	{
		int p1 = alpha.find(x1[i]);
		int p2 = alpha.find(x2[i]);
		if(p1 <= p2)
			cont += p2 - p1;
		else
			cont += 26 - (p1-p2);
	}
	
	return cont;
}

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> x1 >> x2;
		cout << mover(x1.size()) << endl;
	}
	
	
	return 0;
}