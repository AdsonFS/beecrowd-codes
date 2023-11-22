#include <iostream>
#include <cstring>
using namespace std;

int num(char senha[], int ini, int fim)
{
	int h = 1;
	int res = 0;
	for(int i = fim; i >= ini; i--)
	{
		res += (senha[i] - '0') * h;
		h = h*10;
	}
	return res;
}

int main(int argc, char *argv[])
{
	char senha[14];
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> senha;
		int x1 = num(senha, 2, 3);
		int x2 = num(senha, 5, 7);
		int x3 = num(senha, 11, 12);
		cout << x1+x2+x3 << endl;
	}
	
	return 0;
}