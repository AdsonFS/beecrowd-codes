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
int t, j;
string s;

double solve(int k) {
	
	char c;
	int h = 1, i = k;
	double a = 0, b = 0;
	while(i >= -1) {
		if(i == -1) return a;
		c = s[i];
		if(isdigit(s[i])) a += (s[i] - '0') * h, h *= 10;
		if(s[i] == '-') {
			b = solve(i-1);
			return a + b;
		}
		if(s[i] == '|') {
			b = solve(i-1);
			return (a * b * 1.0) / (a + b);
		}
		if(s[i] == ')') {
			a = solve(i-1);
			i = j;
		}
		else if(s[i] == '(') {
			j = i;
			return a;
		}
		i--;
	}
		
	return -(1 << 30);
}

int main(int argc, char** argv) {
	while(cin >> s) {
		t = s.size()-1;
		printf("%.3lf\n", solve(t));
	}
	return 0;
}
