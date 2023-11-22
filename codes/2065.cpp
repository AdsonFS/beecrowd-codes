#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
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
int tem[MAX];

int main(int argc, char** argv) {
	int t = 0;
	int n, m, x;
	scanf("%d%d", &n, &m);
	priority_queue<ii, vector<ii>, greater<ii> > pq;
	for(int i = 0; i < n; i++) {
		scanf("%d", &tem[i]);
		pq.push(mk(0, i));
	}
	for(int i = 0; i < m; i++) {
		scanf("%d", &x);
		int T = pq.top().F;
		int ind = pq.top().S;
		t = max(t, T + (x * tem[ind]));
		pq.push(mk(T + (x * tem[ind]), ind));
		pq.pop();
	}
	printf("%d\n", t);
	return 0;
}
