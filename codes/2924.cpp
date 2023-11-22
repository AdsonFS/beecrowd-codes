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
	string a, b, c;
	cin >> a >> b;
	int aux = 0, A, B;
	int i = a.size()-1;
	int j = b.size()-1;
	while(1 < 2) {
		if(i < 0 && j < 0) {
			if(aux) c.pb(aux+'0');
			break;
		}
		if(i >= 0) A = a[i] - '0';
		else A = 0;
		if(j >= 0) B = b[j] - '0';
		else B = 0;
		aux = aux + A + B;
		if(aux < 10) { c.pb(aux+'0'); aux = 0; }
		else { c.pb((aux-10)+'0'); aux = 1; }
		i--; j--;
	}
	reverse(all(c));
	printf("%s\n", c.c_str());
	return 0;
}

