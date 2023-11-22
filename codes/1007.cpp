#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int A;
	int B;
	int C;
	int D;
	
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	
	int DIFERENCA = (A * B - C * D);
	
	cout << "DIFERENCA = " << DIFERENCA << endl;
	
	return 0;
}