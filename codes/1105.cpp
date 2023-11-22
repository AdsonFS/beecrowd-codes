#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int b, n;
	while(scanf("%d%d", &b, &n))
	{
		if((n+b) == 0)
			break;
		bool ok = true;
		vector<int> num;
		int x;
		num.push_back(0);
		for(int i = 0; i < b; i++)
		{
			scanf("%d", &x);
			num.push_back(x);
		}
		int b1, b2, v;
		for(int i = 0; i < n; i++)
		{
			scanf("%d%d%d", &b1, &b2, &v);
			num[b2] += v;
			num[b1] -= v;
		}
		for(int i = 1; i <= b; i++)
		{
			if(num[i] < 0)
			{
				ok = false;
				break;
			}
		}
		if(ok)
			printf("S\n");
		else
			printf("N\n");
	}
	
	return 0;
}
