#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n, m, x;
	scanf("%d%d", &n, &m);
	set<int> num;
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		num.insert(x);
	}
	printf("%d\n", n - num.size());
	return 0;
}