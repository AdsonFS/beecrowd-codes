#include <iostream>
using namespace std;

int kadane(int vet[], int N, int C)
{
	int ma, mf, ml = 0;
	ma = mf = vet[0];

	for(int i = 1; i < N; i++)
	{
		if((ma > vet[i] && (ma - vet[i] >= C))
				|| vet[i] < mf)
		{
			if(ma - mf - C > 0)
				ml += ma - mf - C;
			ma = mf = vet[i]; 
		}
		if(vet[i] > ma)
			ma = vet[i];
	}
	if(ma - mf - C > 0)
		ml += ma - mf - C; 

	return ml;
}

int main(int argc, char *argv[])
{
	int N, C;
	cin >> N >> C;
	int vet[N];

	for(int i = 0; i < N; i++)
		cin >> vet[i];

	cout << kadane(vet, N, C) << endl;

	return 0;
}