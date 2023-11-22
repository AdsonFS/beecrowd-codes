#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n, l, c;
	int t = 0;
	int i = 1;
	cin >> n;
	do
	{
		cin >> l >> c;
		if(l > c)
			t += c;
		i++;
	}while(i <= n);
	
	cout << t << endl;
	return 0;
}