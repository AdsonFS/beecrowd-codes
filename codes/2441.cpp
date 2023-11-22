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
#define MAX 610
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX];

int main(int argc, char** argv) {
	int x;
	int ans = 0;
	rep(k, 0, 3) {
		scanf("%d", &x);
		rep(i, x, x + 200) {
			if(i > 600) break;
			if(!vet[i]) {
				vet[i] = true;
				ans += 100;
			}
		}
	}
	printf("%d\n", 60000 - ans);
	return 0;
}
