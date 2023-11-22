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
int pd[MAX];
int sum;

void precal() {
	for(int i = 1; i <= MAX; i++)
		pd[i] = pd[i-1] + i;
}

int query(int x1, int x2) {
	return pd[x2] - pd[x1];
}

int main(int argc, char** argv) {
	precal();
	int n;
	sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &vet[i]);
		sum += vet[i];
	}
	int ind = -1;
	for(int i = n; i < MAX; i++) {
		if(query(i - n, i) == sum) {
			ind = i;
			break;
		}
	}
	if(ind == -1) printf("-1\n");
	else {
		sum = 0;
		for(int i = ind - n + 1, j = 0; i <= ind; i++, j++) {
			sum += abs(vet[j] - i);
		}
		
		printf("%d\n", sum / 2);
	}
	return 0;
}

