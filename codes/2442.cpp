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
int vet[MAX];

int main(int argc, char * * argv) {
	char c;
	int neg;
	int n, m, a;
	ll p = 0;
	ll sum = 0;
	int valor = 0;
	priority_queue<int, vector<int>, greater<int> > menor;
	scanf("%d%d", &n, &m);
	a = m;
	neg = 0;
	for(int i = 0; i < m; i++) {
		scanf("%d", &vet[i]);
		menor.push(vet[i]);
		valor += vet[i];
	}
	while(n--) {
		scanf(" %c", &c);
		if(c == 'C')
			p++;
		else {
			p--;
			if(!menor.empty()) {
				while(menor.top() + p <= 0) {
					a--;
					neg += menor.top();
					menor.pop();
					if(menor.empty()) break;
				}
			}
		}
		sum += valor + (p * a) - neg;
	}
	printf("%lld\n", sum);
	return 0;
}
