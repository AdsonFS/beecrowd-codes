#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, m;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> m;
		if(m%2 == 0)
			cout << m/2 << endl;
		else
			cout << (m/2)+1 << endl;
	}
	
	return 0;
}
