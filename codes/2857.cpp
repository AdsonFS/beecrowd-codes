#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
ll bit[MAX];
int n, m;

ll query(int i)  {
	ll sum = 0;
    for(; i; i -= (i &-i))
        sum += bit[i];
    return sum;
}

void update(int i, int v)  {
    for(; i <= n; i += (i &-i))
        bit[i] += v;
}

int main(int argc, char** argv) {
	int x, a, b, c, d;
	scanf("%d%d", &n, &m);
	while(m--) {
		scanf("%d", &x);
		if(x == 1) {
			scanf("%d%d", &a, &b);
			update(a, b);
		}
		else {
			scanf("%d%d%d%d", &a, &b, &c, &d);
			ll v = (query(b) - query(a-1)) + (query(d) - query(c-1));
			if(a <= c && b >= d)
				v -= (query(d) - query(c-1));
			else if(c <= a && d >= b)
				v -= (query(b) - query(a-1));
			
			else if(a <= c && d >= b && b >= c)
				v -= (query(b) - query(c-1));
			else if(c <= a && b >= d && d >= a)
				v -= (query(d) - query(a-1));
			
			cout << v << "\n";
		}
	}	
	return 0;
}

