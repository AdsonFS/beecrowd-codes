#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	string musica[] =
	{
		"PROXYCITY",
		"P.Y.N.G.",
		"DNSUEY!",
		"SERVERS",
		"HOST!",
		"CRIPTONIZE",
		"OFFLINE DAY",
		"SALT",
		"ANSWER!",
		"RAR?",
		"WIFI ANTENNAS"
	};
	int n, x1, x2;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x1 >> x2;
		int s = x1 + x2;
		cout << musica[s] << endl;
	}
	
	return 0;
}
