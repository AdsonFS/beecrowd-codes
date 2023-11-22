#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main(int argc, char *argv[])
{
	int x, n;
	scanf("%d", &n);
	vector<int> num;
	num.pb(0);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		num.pb(x);
	}
	
	for(int i = 1; i <= n; i++)
	{
		int cont = 0;
		if(num[i-1] == 1)
			cont++;
		if(num[i] == 1)
			cont++;
		if(num[i+1] == 1)
			cont++;
		printf("%d\n", cont);
	}
	
	return 0;
}
