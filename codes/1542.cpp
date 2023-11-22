#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char ** argv) {
	int x1, x2, x3;
	while(scanf("%d", &x1) && x1 != 0) {
		scanf("%d%d", &x2, &x3);
		int x = (x2 * x1 * x3) / (x3 - x1);
		if(x > 1)
			printf("%d paginas\n", x);
		else
			printf("%d pagina\n", x);
	}
	
	return 0;
}
