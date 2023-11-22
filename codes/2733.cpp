#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
vector<int> num;
int tam;

bool search(int x, int i) {
	if(i > tam) return false;
	if(num[i] == x) return true;
	return search(x, i+1);
}

void swap(int x) {
	REP(i, tam-3, tam) {
		if(num[i] != x)
			num.pb(num[i]);
	}
}

int main(int argc, char** argv) {
	int n, x;
	while(scanf("%d", &n) != EOF) {
		int ans = 0;
		rep(i, 0, 6)
			num.pb(-1);
		while(n--) {
			scanf("%d", &x);
			tam = num.size() - 1;
			if(!search(x, tam - 3)) ans++;
			else swap(x);
			num.pb(x);
		}
		num.clear();
		printf("%d\n", ans);
	}
	return 0;
}
