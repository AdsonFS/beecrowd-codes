#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 110
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX][MAX];
int n, m;

int ver(int i, int j) {
	return (i >= 0 && i <= n - 1 && j >= 0 && j <= n - 1);
}

int main(int argc, char * * argv) {
	int x, y, p;
	int best = -1;
	vector<ii> pos;
	scanf("%d%d", & n, & m);
	for(int k = 0; k < m; k++) {
		set<ii> num;
		set<ii> :: iterator it;
		scanf("%d%d%d", & x, & y, & p);
		for(int i = 0; i <= p; i++)		// sobe / esquerda
			if(ver(y + i, x + p - i)) num.insert(mk(y + i, x + p - i));
		for(int i = 0; i <= p; i++)		// desce / esquerda
			if(ver(y - i, x + p - i)) num.insert(mk(y - i, x + p - i));
		for(int i = 0; i <= p; i++)		// desce / direita
			if(ver(y - i, x - p + i)) num.insert(mk(y - i, x - p + i));
		for(int i = 0; i <= p; i++) 		// sobe / direita
			if(ver(y + i, x - p + i)) num.insert(mk(y + i, x - p + i));
		for(it = num.begin(); it != num.end(); it++)
			vet[it->F][it->S]++;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(vet[i][j] == best) pos.pb(mk(i, j));
			else if(vet[i][j] > best) {
				best = vet[i][j];
				pos.clear();
				pos.pb(mk(i, j));
			}
		}
	}
	if(pos.size() == 1) printf("%d %d\n", pos[0].S, pos[0].F);
	else printf("-1 -1\n");
	return 0;
}
