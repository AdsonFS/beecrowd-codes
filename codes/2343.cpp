#include <bits/stdc++.h>
using namespace std;

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
int vet[MAX];

int main(int argc, char * * argv) {
	int n, x, x1, x2;
	map<ii, int> mapa;
	scanf("%d", &n);
	bool ok = false;
	for(int i = 0; i < n; i++) {
		scanf("%d%d", &x1, &x2);
		if(!ok)
			x = mapa[mk(x1, x2)] = mapa[mk(x1, x2)] + 1;
		if(x > 1)
			ok = true;
	}
	printf("%d\n", ok);
	return 0;
}
