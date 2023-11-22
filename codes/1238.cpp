#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n, c = 0;
	int i;
	string x1, x2;

	cin >> n;
	while(c < n)
	{
		cin >> x1 >> x2;
		int tam1 = x1.size();
		int tam2 = x2.size();
		if(tam1 < tam2)
		{
			for(i = 0; i < tam1; i++)
				cout << x1[i] << x2[i];
			
			for(int j = i; j < tam2; j++)
				cout << x2[j];
		}
		else if(tam2 < tam1)
		{
			for(i = 0; i < tam2; i++)
				cout << x1[i] << x2[i];
				
			for(int j = i; j < tam1; j++)
				cout << x1[j];
		}
		else
			{
			for(i = 0; i < tam2; i++)
				cout << x1[i] << x2[i];
			}

		cout << endl;
		c++;
	}
	return 0;
}
