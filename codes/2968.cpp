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
	int V, N;
	scanf("%d%d", &V, &N);
	int sum = V * N;
	for(int i = 10; i < 100; i += 10) {
		if(i != 10) printf(" ");
		printf("%d", (int)ceil((1.0 * sum * i) / 100.0));
	}
	printf("\n");
	return 0;
}