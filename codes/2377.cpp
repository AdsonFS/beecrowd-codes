#include <iostream>
#include <iomanip>
#include <stdint.h>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	int L, D, K, P;
	cin >> L >> D;
	cin >> K >> P;
	
	int qp = L/D;
	int ckt = L*K;
	int cpt = P*qp;
	
	int total = cpt + ckt;
	
	cout << total << endl;
		
	
	return 0;
}