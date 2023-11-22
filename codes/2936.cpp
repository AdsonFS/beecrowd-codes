#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
int v[] = {300, 1500, 600, 1000, 150};
int ans = 225, x;

int main(int argc, char ** argv) {
	rep(i, 0, 5) scanf("%d", &x), ans += v[i] * x;
	printf("%d\n", ans);
	return 0;
}

