#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int x, n;
	int sum = 0;
	int aux = 0;
	scanf("%d", &n);
	vector<int> num;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		num.push_back(x);
		sum += x;
	}
	
	for(int i = 0; i < n; i++)
	{
		aux += num[i];
		if(aux == sum/2)
		{
			printf("%d\n", i+1);
			break;
		}
	}
	
	return 0;
}
