#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = "<< x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[55];
int n, k;

int solve(int i) {
	if(vet[i] == i) return i;
	return solve(vet[i]);
}

int main(int argc, char ** argv) {
	while(scanf("%d", &n) && n) {
		REP(i, 1, n) scanf("%d", &vet[i]);
		scanf("%d", &k);
		printf("%d\n", solve(k));
	}
	return 0;
}
