#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
struct game {
	int u1, u2, u3, u4;
	int h, r, c;
	game() {}
	game(int H, int R, int C, int n) {
		u1 = u2 = u3 = u4 = n;
		h = H; r = R; c = C;
	}
};
vector<game> num, aux;
int N, H, R, C;
int U, D, T, Q;
char cor[20];
int pd[MAX];

bool comp(const game &g1, const game &g2) {
	if(g1.r != g2.r) return g1.r > g2.r;
	return g1.c > g2.c;
}

// vermelho !-> verde
// laranja !-> vermelho
// verde !-> azul
// azul !-> laranja

int solve(int i) {
	int &ans = pd[i];
	if(i == N) return 0;
	if(ans != -1) return ans;
	int v = aux[i].h;
	ans = v;
	ans = max(ans, solve(aux[i].u1) + v);
	ans = max(ans, solve(aux[i].u2) + v);
	ans = max(ans, solve(aux[i].u3) + v);
	ans = max(ans, solve(aux[i].u4) + v);
	return ans;
}

int main(int argc, char** argv) {
	while(scanf("%d", &N) && N) {
		rep(i, 0, N) {
			scanf("%d %d %s", &H, &R, cor);
			if(cor[3] == 'M') C = 1;		// Vermelho
			if(cor[3] == 'A') C = 2;		// Laranja
			if(cor[3] == 'D') C = 3;		// Verde
			if(cor[3] == 'L') C = 4;		// Azul
			num.pb(game(H, R, C, N));
			pd[i] = -1;
		}
		num.pb(game(0, 0, 0, N));
		sort(all(num), comp);
		rep(i, 0, N) {
			if(num[i].c == num[i+1].c && num[i].r == num[i+1].r)
				num[i].h = num[i+1].h = max(num[i].h, num[i+1].h);
			if(num[i].c == num[i+1].c && num[i].r == num[i+1].r) continue;
			aux.pb(num[i]);
		}
		N = aux.size();
		aux.pb(game(0, 0, 0, N));
		U = D = T = Q = N;
		PER(i, N-1, 0) {
			C = aux[i].c; R = aux[i].r;
			aux[i].u1 = U; aux[i].u2 = D;
			aux[i].u3 = T; aux[i].u4 = Q;
			if(R == aux[U].r) aux[i].u1 = aux[U].u1;
			if(R == aux[D].r) aux[i].u2 = aux[D].u2;
			if(R == aux[T].r) aux[i].u3 = aux[T].u3;
			if(R == aux[Q].r) aux[i].u4 = aux[Q].u4;
			
			if(C == 1) { aux[i].u3 = N; U = i; }
			if(C == 2) { aux[i].u1 = N; D = i; }
			if(C == 3) { aux[i].u4 = N; T = i; }
			if(C == 4) { aux[i].u2 = N; Q = i; }
		}
		int ans = max(max(solve(U), solve(D)), max(solve(T), solve(Q)));
		printf("%d centimetro(s)\n", ans);
		num.clear(); aux.clear();
	}
	return 0;
}













