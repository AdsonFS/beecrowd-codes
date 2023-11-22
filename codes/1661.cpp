#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
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
int vet[MAX];
int n;

ll solve(int i, int j) {		// i -> compra		j -> vende
	if(i >= n || j >= n) return 0;
	if(vet[i] <= 0) return solve(i+1, j);
	if(vet[j] >= 0) return solve(i, j+1);
	int v = -vet[j];
	if(vet[i] == v) return solve(i+1, j+1) + (vet[i] * abs(j - i));
	if(vet[i] < v) {
		vet[j] += vet[i];
		return solve(i+1, j) + (vet[i] * abs(j - i));
	}
	else {	// vet[i] > v
		vet[i] -= v;
		return solve(i, j+1) + (v * abs(j - i));
	}
}

int main(int argc, char** argv) {
	while(scanf("%d", &n) && n) {
		for(int i = 0; i < n; i++)
			scanf("%d", &vet[i]);
		printf("%lld\n", solve(0, 0));
	}
	return 0;
}
