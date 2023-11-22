#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX];
int pos[110];
int res[MAX];

int main(int argc, char** argv) {
	int n, ans, ind;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &vet[i]);
	for(int i = n-1; i >= 0; i--) {
		ans = -1;
		ind = INF;
		pos[vet[i]] = i;
		for(int j = vet[i] + 1; j <= 100; j++) {
			if(pos[j] > i && pos[j] < ind) {
				ans = j;
				ind = pos[j];
			} 
		}
		res[i] = ans;
	}
	
	for(int i = 0; i < n; i++) {
		if(res[i] == -1) printf("*");
		else printf("%d", res[i]);
		if(i != n - 1) printf(" ");
	}
	printf("\n");
	return 0;
}
