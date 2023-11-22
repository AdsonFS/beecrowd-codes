#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back

int main(int argc, char *argv[])
{
	int x1, x2, x;
	while(scanf("%d%d", &x1, &x2) && (x1+x2) != 0)
	{
		map<int, int> mp;
		int cont = 0;
		for(int i = 0; i < x1; i++)
		{
			scanf("%d", &x);
			mp[x]++;
			if(mp[x] == x2)
			{
				cont++;
				mp[x] = -INF;
			}
		}
		printf("%d\n", cont);
	}
	
	return 0;
}
