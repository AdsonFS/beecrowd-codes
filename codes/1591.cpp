#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 100
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int t, n, m, k, ans;
char vet[MAX][MAX];
char word[MAX];

bool ver_n(int i) {
	return (i >= 1 && i <= n);
}

bool ver_m(int i) {
	return (i >= 1 && i <= m);
}

int dfs_n(int i, int j, int c) {
	if(c == k) return 1;
	if(!ver_n(i) || !ver_n(i+1)) return 0;
	if(vet[i+1][j] == word[c]) return dfs_n(i+1, j, c+1);
	return 0;
}

int dfs_m(int i, int j, int c) {
	if(c == k) return 1;
	if(!ver_m(j)|| !ver_m(j+1)) return 0;
	if(vet[i][j+1] == word[c]) return dfs_m(i, j+1, c+1);
	return 0;
}

int main(int argc, char** argv) {
	scanf("%d", &t);
	while(scanf("%d%d", &n, &m) != EOF) {
		REP(i, 1, n)
			REP(j, 1, m)
				scanf(" %c", &vet[i][j]);
		scanf("%d", &t);
		while(t--) {
			scanf(" %s", word);
			k = strlen(word);
			ans = 0;
			REP(i, 1, n) {
				REP(j, 1, m) {
					if(vet[i][j] == word[0]) {
						if(k != 1) {
							ans += dfs_n(i, j, 1);
							ans += dfs_m(i, j, 1);
						}
						else ans++;
					}
				}
			}
			printf("%d\n", ans);
		}
	}
	return 0;
}

