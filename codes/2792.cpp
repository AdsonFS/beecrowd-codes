#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define MAXN 500010
typedef long long ll;

ll bit[MAXN];
int N;

void update(int i, ll v)
{
	for(; i <= N; i += i&-i)
		bit[i] += v;
}

int query(int i)
{
	int sum = 0;
	for(; i; i -= i&-i)
		sum += bit[i];
	return sum;
}

int main(int argc, char *argv[])
{
	vector<int> num;
	int x;
	scanf("%d", &N);
	for(int i = 1; i < N+1; i++)
		update(i, 1);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &x);
		ll q = query(x);
		update(x, -1);
		num.pb(q);
	}
	printf("%d", num[0]);
	for(int i = 1; i < N; i++)
		printf(" %d", num[i]);
	printf("\n");
	return 0;
}

