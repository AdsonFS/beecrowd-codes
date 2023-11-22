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
	int n, x, cont = -1;
	scanf("%d", &n);
	map<int, int> mp;
	vector<int> num;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		mp[x]++;
		if(mp[x] == cont)
			num.pb(x);
		else if(mp[x] > cont)
		{
			cont = mp[x];
			num.clear();
			num.pb(x);
		}
	}
	sort(num.begin(), num.end(), greater<int>());
	printf("%d\n", num[0]);
	return 0;
}
