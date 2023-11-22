#include <iostream>
using namespace std;

long long int fat(int num)
{
	if(num == 1 || num == 0)
		return 1;
	return num * fat(num - 1);
}

int main(int argc, char *argv[])
{
	int x1, x2;
	
	while(cin >> x1 >> x2)
	{
		cout << fat(x1) + fat(x2) << endl;
	}
	
	return 0;
}
