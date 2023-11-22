#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1100
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
bool primo[MAX];

void crivo(int n) {
	primo[0] = true; primo[1] = true;
	for(int i = 3; i < n; i += 2)
		if(!primo[i])
			for(int j = i * i; j < MAX; j += i)
				primo[j] = true;
}

int main(int argc, char * * argv) {
	crivo(sqrt(MAX));
	int n, m, p1, p2;
	scanf("%d%d", &n, &m);
	if(n == 2)
		p1 = 2;
	else {
		if(n % 2 == 0)
			n--;
		for(int i = n; i > 0; i -= 2)
			if(!primo[i]) {
				p1 = i;
				break;
			}
	}
	if(m == 2)
		p2 = 2;
	else {
		if(m % 2 == 0)
			m--;
	for(int i = m; i > 0; i -=2)
		if(!primo[i]) {
			p2 = i;
			break;
		}
	}
	printf("%d\n", p1 * p2);
	return 0;
}
