#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 502
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int x1, x2, i = 1;
	scanf("%d%d", &x1, &x2);
	int res = x2 / (x2 - x1);
	if(res * (x2 - x1) != x2)
		res++;
	printf("%d\n", res);
	return 0;
}
