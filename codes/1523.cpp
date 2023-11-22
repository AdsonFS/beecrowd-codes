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
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

bool comp(const ii &x1, const ii &x2) {
	if(x1.F != x2.F) return (x1.F < x2.F);
	return (x1.S < x2.S);
}

int main(int argc, char** argv) {
	int n, k, e, s;
	while(scanf("%d%d", &n, &k) && (n+k)) {
		stack<int> pilha;
		vector<ii> num;			// entrada / saida
		rep(i, 0, n) {
			scanf("%d%d", &e, &s);
			num.pb(ii(e, s));
		}
		bool ok = true;
		sort(all(num), comp);
		rep(i, 0, n) {
			e = num[i].F;
			s = num[i].S;
			if(pilha.empty()) pilha.push(s);
			else {
				while(pilha.top() <= e) {
					pilha.pop();
					if(pilha.empty()) break;
				}
				if(pilha.empty()) pilha.push(s);
				else if(pilha.size() < k && s <= pilha.top()) pilha.push(s);
				else ok = false;
			}
			if(!ok) break;
		}
		printf("%s\n", ok ? "Sim" : "Nao");
	}
	return 0;
}
