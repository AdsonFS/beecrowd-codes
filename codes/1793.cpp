#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x, t;
	while(scanf("%d", &n) && n != 0)
	{
		vector<int> num;
		t = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			num.push_back(x);
		}
		for(int i = 1; i < n; i++)
		{
			if(num[i] - num[i-1] <= 10)
				t += num[i] - num[i-1];
			else
				t += 10;
		}
		printf("%d\n", t+10);
	}
	return 0;
}