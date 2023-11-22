#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 1050
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char ** argv) {
	int i, n, d, e, f, v;
	char op, p;
	scanf("%d%d", &i, &n);
	d = e = f = i;
	for(int i = 0; i < n; i++) {
		scanf(" %c %c", &op, &p);
		if(op == 'C') {
			scanf("%d", &v);
			
			if(p == 'E') e -= v;
			else if(p == 'F') f -= v;
			else d -= v;
		}
		else if(op == 'V') {
			scanf("%d", &v);
			if(p == 'E') e += v;
			else if(p == 'F') f += v;
			else d += v;
		}
		else {
			scanf(" %c %d", &op, &v);
			if(op == 'E') e -= v;
			else if(op == 'F') f -= v;
			else d -= v;
			
			if(p == 'E') e += v;
			else if(p == 'F') f += v;
			else d += v;
		}
	}
	printf("%d %d %d\n", d, e, f);
	return 0;
}
