#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 42

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[])
{
	vector<int> num;
	int n, x;
	int atual = 0;
	int best = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		num.pb(x);
	}
	
	for(int i = 0; i < n; i++)
	{
		atual = max(0, atual + num[i]);
		best = max(best, atual);
	}
	
	printf("%d\n", best);
	return 0;
}
