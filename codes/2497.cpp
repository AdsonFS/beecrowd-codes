#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x;
	int i = 1;
	cin >> x;
	do
	{
		cout << "Experiment " << i << ": " << x/2 << " full cycle(s)" << endl;
		
		
		cin >> x;
		i++;
	}while(x != -1);
	
	
	return 0;
}