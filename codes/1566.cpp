#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first

int main(int argc, char *argv[])
{
	int n, m, x;
	scanf("%d", &n);
	for(int j = 0; j < n; j++)
	{
		vector<int> num;
		scanf("%d", &m);
		for(int i = 0; i < m; i++)
		{
			scanf("%d", &x);
			num.pb(x);
		}
		sort(num.begin(), num.end());
		printf("%d", num[0]);
		for(int i = 1; i < m; i++)
			printf(" %d", num[i]);
		printf("\n");
	}
	
	return 0;
}
