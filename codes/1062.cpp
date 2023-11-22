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
double x[MAX], y[MAX];

int main(int argc, char** argv) {
	int n;
	int vet[MAX];
	while(scanf("%d", &n) && n) {
		bool ok = true;
		while(ok) {
			for(int i = 0; i < n; i++) {
				scanf("%d", vet + i);
				if(vet[0] == 0) {
					ok = false;
					break;
				}
			}
			if(!ok) break;
			stack<int> pilha;
			pilha.push(-1);
			int p = 0, c = 1;
			while(p < n) {
				if(pilha.top() == vet[p]) {
					p++;
					pilha.pop();
				}
				else {
					if(c > n + 1) break;
					pilha.push(c++);
				}
			}
			if(c == n + 1) printf("Yes\n");
			else printf("No\n");
		}
		printf("\n");
	}
	return 0;
}
