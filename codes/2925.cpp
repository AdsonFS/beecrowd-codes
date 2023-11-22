#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int N;
	ull v[65]; 
	char aux[22];
	v[1] = 1;
	v[0] = 0;
	string s[66];
	REP(i, 2, 61) {
		ull x = v[i-1] + v[i-2];
		sprintf(aux, "%lld", x);
		int t = log10(x)+1;
		s[i] = aux;
		reverse(aux, aux + t);
		ull a = 0;
		ull h = 1;
		for(int j = t-1; j >= 0; j--, h *= 10)
			a += (aux[j] - '0') * h;
		v[i] = a;
	}
	while(scanf("%d", &N) != EOF) {
		if(N) printf("%s\n", s[N+1].c_str());
		else puts("0");
	}
	return 0;
}
