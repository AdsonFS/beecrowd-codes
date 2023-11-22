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


int main(int argc, char *argv[])
{
	int c, n;
	scanf("%d%d", &c, &n);
	int k = c / n;
	printf("%d\n", c - (n * k));
	return 0;
}