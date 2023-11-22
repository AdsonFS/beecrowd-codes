#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int vet[] = {1, 3, 5, 10, 25, 50, 100};	
	int n;
	cin >> n;
	for(int i = 0; i < 7; i++)
	{
		if(n <= vet[i])
		{
			cout << "Top " << vet[i] << endl;
			break;
		}
	}
	
	return 0;
}