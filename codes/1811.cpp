#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 125000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

struct pessoa {
	int bc, p, u, d, id;
	void setar() {
		bc = p = u = d = id = 0;
	}
};

bool comp(const pessoa & p1, const pessoa &p2) {
	if(p1.bc != p2.bc)
		return (p1.bc > p2.bc);
	if(p1.d != p2.d)
		return (p1.d > p2.d);
	if(p1.u != p2.u)
		return (p1.u > p2.u);
	return (p1.id < p2.id);
}

int main(int argc, char * * argv) {
	int vet[101];
	vet[0] = -10;
	int best, con, n, m, p, u, h = 0;
	while(scanf("%d%d", &n, &m) && n != 0) {
		pessoa pp;
		vector<pessoa> num;
		for(int i = 1; i <= n; i++) {
			con = 0;
			best = 0;
			p = u = 1;
			for(int j = 1; j <= m; j++) {
				scanf("%d", &vet[j]);
				if(vet[j] > vet[j - 1]) {
					con++;
					if(con > best) {
						best = con;
						pp.u = vet[j];
						pp.d = vet[j] - vet[p];
					}
				}
				else {
					con = 0;
					p = j;
				}
			}
			pp.bc = best; pp.p = vet[1]; pp.id = i;
			num.pb(pp);
		}
		sort(all(num), comp);
		printf("Instancia #%d\n%d\n\n", ++h, num[0].id);
	}
	return 0;
}
