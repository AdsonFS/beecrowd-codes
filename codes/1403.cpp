#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define MAX 1000000000000000001
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

bool comp(const ii &x1, const ii &x2) {
	if(x1.S != x2.S)
		return (x1.S > x2.S);
	return (x1.F < x2.F);
}

int main(int argc, char** argv) {
	int n, m, x;
	while(scanf("%d%d", &n, &m) && (n+m) != 0) {
		map<int, int> mapa;
		vector<ii> num;
		set<int> vet;
		set<int>::iterator it;
		while(n--) {
			for(int i = 0; i < m; i++) {
				scanf("%d", &x);
				mapa[x]++;
				vet.insert(x);
			}
		}
		for(it = vet.begin(); it != vet.end(); it++) {
			num.pb(mk(*it, mapa[*it]));
		}
		sort(all(num), comp);
		int tam = num.size();
		for(int i = 1; i < tam; i++) {
			if(num[i].S != num[1].S)
				break;
			printf("%d ", num[i].F);
		}
		printf("\n");
	}
	return 0;
}