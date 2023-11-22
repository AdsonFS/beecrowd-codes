#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> num;
	int n, x, t = 0;
	scanf("%d", &n);
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
	return 0;
}