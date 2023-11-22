#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define minN 500010
#define str second
#define F first
typedef long long ll;
typedef pair<int, int> ii;


int main(int argc, char *argv[])
{
	int n, m, x;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		vector<int> num;
		ll sum = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			num.pb(x);
		}
		sort(num.begin(), num.end(), greater<int>());
		for(int i = 0; i < m; i++)
			sum += num[i];
		cout << sum << "\n";
	}

	return 0;
}
