#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	unsigned long long int res = ((n * (pow(n, 3) - (6 * pow(n, 2)) + (23 * n) - 18))/24) + 1;
	cout << res << endl;
	return 0;
}