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
	int x1, x2, x3, x4;
	scanf("%d%d%d%d", &x1, &x2, &x3, &x4);
	if((x1*x2) == (x3*x4) || (x1*x3) == (x2*x4) || (x1*x4) == (x3*x2))
		printf("S\n");
	else
		printf("N\n");
	return 0;
}