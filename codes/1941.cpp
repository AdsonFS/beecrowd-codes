#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 2100
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
ii pd[MAX][MAX];	// ii(especial, numero)
int esp[MAX];
string str;
int n, x;

ii operator + (const ii &x1, const ii &x2) {
	return ii(x1.F + x2.F, x1.S + x2.S);
}

ii max(const ii &x1, const ii &x2) {
	if(x1.F != x2.F) return x1.F > x2.F ? x1 : x2;
	return x1.S > x2.S ? x1 : x2;
}

ii solve(int i, int j) {
	if(i == j) return pd[i][j] = ii(esp[i], 1);
	if(i + 1 == j) {
		if(str[i] == str[j]) return pd[i][j] = ii(esp[i] + esp[j], 2);
		return pd[i][j] = ii(esp[i] || esp[j], 1);
	}
	if(pd[i][j] != ii(-1, -1)) return pd[i][j];
	if(str[i] == str[j]) return pd[i][j] = max(solve(i+1, j-1) + ii(esp[i] + esp[j], 2), 
				max(solve(i+1, j), solve(i, j-1)));
	return pd[i][j] = max(solve(i+1, j), solve(i, j-1));
}

int main(int argc, char ** argv) {
	char vet[MAX];
	scanf(" %s", vet);
	str = vet;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &x);
		esp[x-1] = 1;
	}
	memset(pd, -1, sizeof (pd));
	printf("%d\n", solve(0, str.size() - 1).S);
	return 0;
}
