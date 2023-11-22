#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 22

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv)
{
	int n, x1, x2, a, b, h = 1;
	while(scanf("%d", &n) && n != 0)
	{
		a = 0;
		b = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d%d", &x1, &x2);
			a += x1;
			b += x2;
		}
		if(a > b)
			printf("Teste %d\nAldo\n\n", h++);
		else
			printf("Teste %d\nBeto\n\n", h++);
	}
	
	return 0;
}
