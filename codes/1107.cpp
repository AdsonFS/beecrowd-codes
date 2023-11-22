#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef unsigned long long int ull;
typedef pair<ull, int> ii;
typedef long long ll;
int vet[MAX];

int main(int argc, char** argv) {
	int a, c;
	while(scanf("%d%d", &a, &c) && (a+c)) {
		int ans = 0;
		vet[0] = a;
		REP(i, 1, c) {
			scanf("%d", &vet[i]);
			if(vet[i] < vet[i-1]) ans += vet[i-1] - vet[i];
		}
		
		printf("%d\n", ans);
	}
	return 0;
}
