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
#define S second
#define F first
#define MAX 210
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, x;
	int sum = 0;
	priority_queue<int> pq1, pq2;
	scanf("%d", &n);
	rep(i, 0, n) {
		scanf("%d", &x);
		pq2.push(x);
	}
	rep(i, 0, n) {
		scanf("%d", &x);
		pq1.push(x);
	}
	while(!pq1.empty() && !pq2.empty()) {
		int v1 = pq1.top();
		int v2 = pq2.top();
			if(v1 > v2) {
			sum++;
			pq1.pop();
			pq2.pop();
		}
		else pq2.pop();
	}
	printf("%d\n", sum);
	return 0;
}
