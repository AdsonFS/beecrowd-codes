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
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, m;
	scanf("%d%d", &n, &m);
	if(m < n) puts("Eu odeio a professora!");
	else if(n + 3 <= m) puts("Muito bem! Apresenta antes do Natal!");
	else {
		puts("Parece o trabalho do meu filho!");
		m += 2;
		if(m <= 24) puts("TCC Apresentado!");
		else puts("Fail! Entao eh nataaaaal!");
	}
	return 0;
}
