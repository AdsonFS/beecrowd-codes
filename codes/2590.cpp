#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int res[] = {1, 7, 9, 3};
	int n, x;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &x);
		printf("%d\n", res[x % 4]);
	}
	return 0;
}
