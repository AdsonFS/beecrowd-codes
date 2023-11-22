#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	string col = "ZZZZZZZZZZZZabcdefghZZZZZZZZZZZZ";
	char op1, op2;
	int x1, x2;
	bool ok = false;
	cin >> op1 >> x1 >> op2 >> x2;
	int p = col.find(op1);
	if(col[p+2] == op2 && ((x1+1) == x2 || (x1-1) == x2))
		ok = true;
	else if(col[p-2] == op2 && ((x1+1) == x2 || (x1-1) == x2))
		ok = true;
	else if(col[p+1] == op2 && ((x1+2) == x2 || (x1-2) == x2))
		ok = true;
	else if(col[p-1] == op2 && ((x1+2) == x2 || (x1-2) == x2))
		ok = true;
	
	if(ok)
		printf("VALIDO\n");
	else
		printf("INVALIDO\n");
	return 0;
}