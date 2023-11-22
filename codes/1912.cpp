#include <iostream>
#include <cstring>
#include <iomanip>

#define MIN 0.000005
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(4);
	int n;
	unsigned long long a;
	int vet[100001];
	while(cin >> n >> a && (n+a) != 0)
	{
		int maior = 0;
		for(int i = 0; i < n; i++)
			cin >> vet[i];

		for(int i = 0; i < n; i++)
		{
			if(vet[i] > maior)
				maior = vet[i];
		}

		double ini = 0, fim = maior;
		double mid = 0;
		bool ok = true;
		double soma = 0;
		for(int i = 0; i < n; i++)
		{
			if((vet[i] - mid) > 0)
				soma += vet[i] - mid;
		}
		if(soma == a)
		{
			ok = false;
			cout << ":D\n";
		}
		if(soma < a)
		{
			ok = false;
			cout << "-.-\n";
		}
		while(ok)
		{
			int i = 0;
			soma = 0;
			mid = (ini + fim) / 2.0;
			for(i = 0; i < n; i++)
			{
				if((vet[i] - mid) > 0)
					soma += vet[i] - mid;
			}
			if(soma == a)
				break;
			if(fim - ini < MIN)
				break;
			if(soma > a)
			{
				ini = mid;
			}
			else if(soma < a)
			{
				fim = mid;
			}

		}
		if(ok)
			cout << mid << endl;
	}

	return 0;
}
