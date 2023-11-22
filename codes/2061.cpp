#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	cin >> x >> n;
	string str;
	for(int i = 0; i < n; i++)
	{
		cin >> str;
		if(str == "fechou")
			x++;
		else
			x--;
	}
	if(x < 0)
		x = 0;
	cout << x << endl;
	
	return 0;
}