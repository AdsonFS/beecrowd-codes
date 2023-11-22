#include <iostream>
using namespace std;

// 12 graos = 1 kg

int main(int argc, char *argv[])
{
	int n, x1;
	unsigned long long int total;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x1;
		total = 1;
		if(x1 == 64)
			cout << 1537228672809129 << " kg\n";
		else
		{
			for(int k = 0; k < x1; k++)
				total *= 2;
			total /= 12000;
			cout << total << " kg\n";
		}
	}

	return 0;
}
