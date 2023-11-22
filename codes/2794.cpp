#include <bits/stdc++.h>
using namespace std;

#define mk make_pair
#define pb push_back
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	vector<ii> num;				// dist - tom
	int n, d, t;
	bool ok = true;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &d, &t);
		num.pb(mk(d, t));
	}
	
	sort(num.begin(), num.end());
	for(int i = 1; i < n; i++)
	{
		if(num[i].second > num[i-1].second)
		{
			ok = false;
			break;
		}
	}
	if(ok)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}