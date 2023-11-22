#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
double x[MAX], y[MAX];

int main(int argc, char** argv) {
	int vet[105][105];
	int n;
	for(int i = 0; i < 105; i++)
		vet[0][i] = vet[i][0] = i + 1;
	while(scanf("%d", &n) && n) {
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
			    if(j != n) cout << setw(3) << vet[i-1][j-1] << " ";
			    else cout << setw(3) << vet[i-1][j-1];
				vet[i][j] = vet[i-1][j-1];
			}
			cout << "\n";
		}
		cout << "\n";
	}
	return 0;
}
