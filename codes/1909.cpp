#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[])
{
	int n, t;
	ll pl;
	while(scanf("%d%d", &n, &t) && (n + t) != 0)
	{
		map<int, int> vis;
		ll aux = 1;
		for(int i = 0; i < n; i++)
		{
			cin >> pl;
			if(i == 0)
				aux = pl;
			aux = (pl * aux) / __gcd(aux, pl);
				
			vis[pl] = 1;
		}
	//	printf("%d\n", aux);
		bool ok = false;
		for(ll i = 2; i <= t; i++)
		{
			ll xx = (aux * i) / __gcd(aux, i);
			if(vis[i] == 0 && xx == t)
			{
				cout << i << "\n";
				ok = true;
				break;
			}
		}
		if(!ok)
			printf("impossivel\n");
	}

	return 0;
}
