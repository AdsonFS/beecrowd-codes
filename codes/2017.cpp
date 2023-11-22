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
#define MAX 2000010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;


int main(int argc, char ** argv) {
	int ind = -1, ans = (1 << 30), K;
	string s, s1;
	cin >> s >> K;
	int tam = s.size();
	rep(i, 0, 5) {
		cin >> s1;
		int aux = 0;
		rep(j, 0, tam) if(s[j] != s1[j]) aux++;
		if(aux <= K && aux < ans) {
			ans = aux;
			ind = i+1;
		}
	}
	printf("%d\n", ind);
	if(ind != -1) printf("%d\n", ans);
	return 0;
}
