#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
const int MAX = 34e3;
int cnt, p[MAX], a[MAX];

void crivo() {
	for(int i = 2; i < MAX; i++) {
		if(p[i]) continue;
		a[++cnt] = i;
		int aux = -1;
		for(int j = i; j < MAX; j++) {
			if(p[j]) continue;
			if(++aux%i == 0)  p[j] = 1;
		}
	}
}

int main(int argc, char ** argv) {
	crivo();
	while(scanf("%d", &cnt) && cnt)
		printf("%d\n", a[cnt]);
	return 0;
}
