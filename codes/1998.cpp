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
#define MAX 510
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX];
int n;

int main(int argc, char** argv) {
	while(scanf("%d", &n) && n != -1) {
		REP(i, 1, n) scanf("%d", &vet[i]);
		int sum = 0;
		bool ok = true;
		for(int i = n; i > 0; i--) {
			int v = vet[i] + sum;
			if(v == 0) continue;
			if(v % i == 0) sum += v / i;
			else ok = false;
			if(!ok) break;
		}
		printf("%c\n", ok ? 'S' : 'N');
	}
	return 0;
}
