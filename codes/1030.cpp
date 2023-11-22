#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int t, n, k, h = 1;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d", &n, &k);
		queue<int> fila;
		for(int i = 1; i <= n; i++)
			fila.push(i);
		while(fila.size() != 1) {
			for(int i = 0; i < k-1; i++) {
				fila.push(fila.front());
				fila.pop();
			}
			fila.pop();
		}
		printf("Case %d: %d\n", h++, fila.front());
	}
	return 0;
}
