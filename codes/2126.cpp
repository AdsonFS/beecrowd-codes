#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first
#define debug(x) cout<<#x << " = "<<x<<endl;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
string x1, x2;
int t1, t2, h;
int ind;

int solve(int i, int j, int p) {
	if(i >= t1) {
		ind = (j+1) - t1;
		return solve(0, ind, p) + 1;
	}
	if(j >= t2) return 0;
	if(x1[i] == x2[j]) return solve(i+1, j+1, p);
	if(p == 1) return solve(0, j+1, 0);
	return solve(0, j, 1);
}

int main(int argc, char** argv) {
	while(cin >> x1 >> x2) {
		t1 = x1.size();
		t2 = x2.size();
		int ans = solve(0, 0, 0);
		printf("Caso #%d:\n", ++h);
		if(ans != 0) {
			printf("Qtd.Subsequencias: %d\n", ans);
			printf("Pos: %d\n\n", ind);
		}
		else
			printf("Nao existe subsequencia\n\n");
	}
	return 0;
}