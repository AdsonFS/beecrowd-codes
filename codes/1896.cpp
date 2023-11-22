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

struct deck
{
	int a, d, h;
};

int n, a, d, h;
vector<deck> vet;
bool ok;

void backtracking(int j, int at, int de, int ha, int sum)
{
	if(at == a && de == d && ha == h && sum > 1)
		ok = true;
	else if (!ok)
		for(int i = j; i < n; i++)
		{
			deck ca = vet[i];
			if(ca.a + at <= a && ca.d + de <= d && ca.h + ha <= h)
				backtracking(i+1, ca.a + at, ca.d + de, ca.h + ha, sum+1);
			
		}
}

int main(int argc, char *argv[])
{
	deck de;
	scanf("%d%d%d%d", &n, &a, &d, &h);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d%d%d", &de.a, &de.d, &de. h);
		vet.pb(de);
	}
	backtracking(0, 0, 0, 0, 0);
	if(ok)
		printf("Y\n");
	else
		printf("N\n");
	return 0;
}