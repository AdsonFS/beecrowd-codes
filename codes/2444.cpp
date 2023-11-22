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
typedef pair<char, int> ci;
const int MAX = 1e4+4;
int N, M, x;

int main(int argc, char ** argv) {
	scanf("%d%d", &N, &M);
	rep(i, 0, M) scanf("%d", &x), N += x, N = min(100, N), N = max(0, N);
	printf("%d\n", N);
	return 0;
}
