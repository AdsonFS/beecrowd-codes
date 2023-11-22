#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
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
int vet[MAX];

int main(int argc, char * * argv) {
	int n, m, t, cost, u;
	scanf("%d%d", &n, &m);
	priority_queue< ii, vector<ii>, greater<ii> > pq;		// tempo / indice
	for(int i = 1; i <= n; i++)
		pq.push(mk(0, i));
	for(int i = 0; i < m; i++) {
		scanf("%d", &t);
		u = pq.top().S;
		cost = pq.top().F;
		pq.pop();
		vet[u]++;
		pq.push(mk(cost + t, u));
	}
	for(int i = 1; i <= n; i++)
		printf("%d %d\n", i, vet[i]);
	return 0;
}
