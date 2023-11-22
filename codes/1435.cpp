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
int vet[MAX][MAX];

int main(int argc, char** argv) {
	int n;
	while(scanf("%d", &n) && n) {
		int mid = n/2;
		if(n % 2 == 0) {
			for(int i = 1; i <= mid; i++) {
				for(int j = 1; j <= mid; j++) {
					vet[i][j] = j > i ? vet[i][j-1] : j;
					if(j == 1) cout << setw(3 - (int)log10(vet[i][j])) << vet[i][j];
					else cout << setw(3 - (int)log10(vet[i][j])) << " " << vet[i][j];
				}
				for(int j = mid+1, k = mid; j <= n; j++, k--) 
					cout << setw(3 - (int)log10(vet[i][k])) << " " << vet[i][k];
				printf("\n");
			}
			for(int i = mid; i >= 1; i--) {
				for(int j = 1; j <= mid; j++) {
					if(j == 1) cout << setw(3 - (int)log10(vet[i][j])) << vet[i][j];
					else cout << setw(3 - (int)log10(vet[i][j])) << " " << vet[i][j];
				}
				for(int j = mid; j >= 1; j--)
					cout << setw(3 - (int)log10(vet[i][j])) << " " << vet[i][j];
				printf("\n");
			}
		}
		else {
			mid++;
			for(int i = 1; i <= mid; i++) {
				for(int j = 1; j <= mid; j++) {
					vet[i][j] = j > i ? vet[i][j-1] : j;
					if(j == 1) cout << setw(3 - (int)log10(vet[i][j])) << vet[i][j];
					else cout << setw(3 - (int)log10(vet[i][j])) << " " << vet[i][j];
				}
				for(int j = mid+1, k = mid-1; j <= n; j++, k--)
					cout << setw(3 - (int)log10(vet[i][k])) << " " << vet[i][k];
				printf("\n");
			}
			for(int i = mid-1; i >= 1; i--) {
				for(int j = 1; j <= mid; j++) {
					if(j == 1) cout << setw(3 - (int)log10(vet[i][j])) << vet[i][j];
					else cout << setw(3 - (int)log10(vet[i][j])) << " " << vet[i][j];
				}
				for(int j = mid-1; j >= 1; j--)
					cout << setw(3 - (int)log10(vet[i][j])) << " " << vet[i][j];
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}
