#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;

int main(int argc, char** argv) {
	int T, N, x;
	scanf("%d", &T);
	rep(t, 0, T) {
		int sum = 0;
		scanf("%d", &N);
		rep(i, 0, N) {
			scanf("%d", &x);
			sum += x-1;
		}
		printf("%d\n", sum+1);
	}
	return 0;
}
