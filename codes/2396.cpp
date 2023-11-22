#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	vector<ii> num;
	int n, m, x;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++)
	{
		int sum = 0;
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &x);
			sum += x;
		}
		num.pb(mk(sum, i));
	}
	sort(num.begin(), num.end());
	for(int i = 0; i < 3; i++)
		printf("%d\n", num[i].second);
	return 0;
}