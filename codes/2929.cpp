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
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, v;
	int m = INF;
	string op;
	char o[20];
	scanf("%d", &n);
	stack<ii> pilha;
	pilha.push(ii(INF, INF));
	while(n--) {
		scanf("%s", o);
		op = o;
		if(op == "PUSH") {
			scanf("%d", &v);
			m = min(pilha.top().S, v);
			pilha.push(ii(v, m));
		}
		else if(op == "POP") {
			if(pilha.size() == 1) puts("EMPTY");
			else pilha.pop();
		}
		else {
			if(pilha.size() == 1) puts("EMPTY");
			else printf("%d\n", pilha.top().S);
		}
	}
	return 0;
}

