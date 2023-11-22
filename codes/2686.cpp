#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
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
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

void printar(int x) {
	if(x < 10) printf("0");
	printf("%d", x);
}

int main(int argc, char** argv) {
	double x;
	while(cin >> x) {
		double s = (240 * x) + 21600;
		int h = s / 3600;
		s -= h * 3600;
		int m = s / 60;
		s -= m * 60;
		if(h >= 24) h -= 24;
		if(x < 90) puts("Bom Dia!!");
		else if(x < 180) puts("Boa Tarde!!");
		else if(x < 270) puts("Boa Noite!!");
		else puts("De Madrugada!!");
		printar(h); printf(":");
		printar(m); printf(":");
		printar(s); printf("\n");
	}
	return 0;
}


