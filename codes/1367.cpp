#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, a, t, T;
	string str;
	char op;
	while(scanf("%d", &n) && n) {
		a = t = 0;
		map<char, int> mapa;
		while(n--) {
			cin >> op >> T >> str;
			if(str == "correct") {
				t += (mapa[op] * 20) + T;
				a++;
			}
			else
				mapa[op]++;
		}
		printf("%d %d\n", a, t);
	}
	return 0;
}