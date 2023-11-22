#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	int N;
	string x1;

	cin >> N;
	getchar();
	for (int i = 0; i < N; i++)
	{
		getline(cin, x1);
		for (int i = 0; i < x1.size(); i++)
		{
			if (islower(x1[i]) && !islower(x1[i - 1]))
				cout << x1[i];
		}
		cout << endl;
	}
	return 0;
}
