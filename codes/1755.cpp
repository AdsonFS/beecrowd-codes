#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXN 100002
#define MAXC 1002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int wt[MAXC];
bool V[MAXC][MAXN];

int main(int argc, char** argv)
{
	int t, d, n;
	scanf("%d", &t);
	for(int k = 0; k < t; k++)
	{
		double now, x;
		double m = 0;
		scanf("%d%d", &d, &n);
		for(int i = 0; i < n; i++)
		{
			scanf("%lf", &x);
			if(x < d)
			{
				now = (int)(d/x);
				now = d - (now * x);
				m = max(m, now);
			}
		}
		printf("%.2lf\n", m);
	}
	
	return 0;
}

