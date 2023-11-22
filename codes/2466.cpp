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
	int n, x;
	vector<int> num[70];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		num[0].pb(x);
	}
	
	int tam = num[n-1].size();
	int i = 1;
	while(tam == 0)
	{
		int t = num[i-1].size() - 1;
		for(int j = 0; j < t; j++)
		{
			if(num[i-1][j] == num[i-1][j+1])
				num[i].pb(1);
			else
				num[i].pb(-1);
		}
		i++;
		tam = num[n-1].size();
	}
	int fim = num[n-1][0];
	if(fim == -1)
		printf("branca\n");
	else
		printf("preta\n");
	
	return 0;
}
