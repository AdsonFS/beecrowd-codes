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
const int MAX = 1e5+5;
bool p[MAX];
int x;

void crivo() {
	p[0] = p[1] = 1;
	for(int i = 2; i*i < MAX; i++) {
		if(p[i]) continue;
		for(int j = i+i; j < MAX; j += i) p[j] = 1;
	}
}

int main(int argc, char ** argv) {
	crivo();
	while(scanf("%d", &x) != EOF) {
		char s[10];
		int ok = 1;
		sprintf(s, "%d", x);
		rep(i, 0, strlen(s))
			if(p[s[i]-'0']) ok = 0;
		if (ok && !p[x]) puts("Super");
		else if(!p[x]) puts("Primo");
		else puts("Nada");
	}
	return 0;
}
