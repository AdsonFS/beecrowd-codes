#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	unsigned long long int n, i, x;
	vector<int> num;
	unsigned long long int soma = 0;
	unsigned long long int roubo = 0;
	unsigned long long int est = 1;
	cin >> n;
	num.push_back(0);
	for(i = 1; i <= n; i++)
	{
		cin >> x;
		num.push_back(x);
		soma += x;
	}
	i = 1;
	while(i > 0 && i <= n)
	{
		if(i > est)
			est = i;
		if(num[i] % 2 == 0)
		{
			if(num[i] > 0)
			{
				num[i]--;
				roubo++;
			}
			i--;
		}
		else
		{
			if(num[i] > 0)
			{
				num[i]--;
				roubo++;
			}
			i++;
		}
	}
	cout << est << " " << soma - roubo << endl;
	
	return 0;
}
