#include <iostream>
using namespace std;

int cnt;

int fib(int x)
{
	cnt++;
	if(x == 0)
		return 0;
	if(x == 1)
		return 1;
	return fib(x - 1) + fib(x - 2);
}

int main(int argc, char *argv[])
{
	int n, x;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		cnt = -1;
		int y = fib(x);
		cout << "fib(" << x << ") = " << cnt << " calls = " << y << endl;
	}
	
	return 0;
}