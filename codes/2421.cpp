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

bool ver(int l1, int l2, int l, int h1, int h2, int h)
{
	return (l1 <= l && l2 <= l && h1 + h2 <= h);
}

int main(int argc, char** argv)
{
	int l, h, l1, h1, l2, h2;
	scanf("%d%d%d%d%d%d", &l, &h, &l1, &h1, &l2, &h2);
	bool ok = false;
	/////////////////////////////////
	if(ver(l1, l2, l, h1, h2, h))
		ok = true;
	else if(ver(l1, l2, h, h1, h2, l))
		ok = true;
	/////////////////////////////////
	else if(ver(l1, h2, l, h1, l2, h))
		ok = true;
	else if(ver(l1, h2, h, h1, l2, l))
		ok = true;
	/////////////////////////////////
	else if(ver(h1, l2, l, l1, h2, h))
		ok = true;
	else if(ver(h1, l2, h, l1, h2, l))
		ok = true;
	/////////////////////////////////
	else if(ver(h1, h2, l, l1, l2, h))
		ok = true;
	else if(ver(h1, h2, h, l1, l2, l))
		ok = true;
	
	if(ok)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
