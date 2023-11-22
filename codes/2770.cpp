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
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int x, y, x1, y1, m;
	while(cin >> x >> y >> m) {
		while(m--) {
			cin >> x1 >> y1;
			if(x1 <= x && y1 <= y || x1 <= y && y1 <= x ) cout << "Sim\n";
			else cout << "Nao\n";
		}
	}return 0;
}

