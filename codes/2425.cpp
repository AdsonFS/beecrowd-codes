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
bool vis[MAX];

int main(int argc, char * * argv) {
	int n, c, T;
	int t[MAX], d[MAX];
	priority_queue<int, vector<int>, greater<int> >pq;
	int ans = T = 0;
	scanf("%d%d", &c, & n);
	for(int i = 0; i < n; i++)
		scanf("%d%d", & t[i], & d[i]);
	for(int i = 0; i < n; i++) {
		if(T - t[i] > 20) {
			ans++;
			T = pq.top() + d[i];
			pq.pop();
			pq.push(T);
		} else if(pq.size() < c)pq.push(t[i] + d[i]);
		else {
			if(pq.top() > t[i]) pq.push(pq.top() + d[i]);
			else pq.push(t[i] + d[i]);
			pq.pop();
		}
		if(!pq.empty()) T = pq.top();
	}
	
	printf("%d\n", ans);
	return 0;
}
