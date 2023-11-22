#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

struct atracao {
	int v, a;
};

atracao vet[50];
int pd[41][1000][1000];
int n;

int solve(int i, int V, int A) {
	if(i >= n) return 0;
	if(pd[i][V][A] != -1) return pd[i][V][A];
	int ret = 0;
	if(vet[i].v < 0 && V + vet[i].v >= 0)
			ret = max(solve(i+1, V + vet[i].v, A + vet[i].a) + 1, solve(i+1, V, A));
	else if(vet[i].a < 0 && A + vet[i].a >= 0)
			ret = max(solve(i+1, V + vet[i].v, A + vet[i].a) + 1, solve(i+1, V, A));
	else
		ret = solve(i+1, V, A);
	return pd[i][V][A] = ret;
}

int main(int argc, char** argv) {
	int V, A;
	while(scanf("%d", &n) != EOF) {
		memset(pd, -1, sizeof(pd));
		scanf("%d%d", &V, &A);
		for(int i = 0; i < n; i++)
			scanf("%d%d", &vet[i].v, &vet[i].a);
		printf("%d\n", solve(0, V, A));
	}
	return 0;
}
