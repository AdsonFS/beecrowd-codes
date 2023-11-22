#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	int t, a1, t1, b1, t2, h;
	int T, p1, p2;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d%d%d%d", &a1, &t1, &b1, &t2, &h);
		priority_queue<int, vector<int>, greater<int> > tempo1;
		priority_queue<int, vector<int>, greater<int> > tempo2;
		tempo1.push(0);
		tempo2.push(0);
		int v = 0;
		while(h > 0) {
			// bool ok1 = false;
			// bool ok2 = false;
			int T;
			int T1 = tempo1.top();
			int T2 = tempo2.top();
			if(T1 < T2) {
				tempo1.pop();
				T = T1;
			}
			else if(T2 < T1) {
				tempo2.pop();
				T = T2;
			}
			else {
				tempo1.pop();
				tempo2.pop();
				T = T1;
			}
			p1 = (T % t1) + 1;		// andre
			p2 = (T % t2) + 1;		// beto
			// cout << T << endl;
			if(p1 == 1) {
				v = 0;
				h = h - a1;
				tempo1.push(T + t1);
			}
			if(h <= 0) break;
			if (p2 == 1) {
				v = 1;
				h = h - b1;
				tempo2.push(T + t2);
			}
		}
		// cout << t1 << " " << t2 << "\n";
		if(v == 1) printf("Beto\n");
		else printf("Andre\n");
	}
	return 0;
}
