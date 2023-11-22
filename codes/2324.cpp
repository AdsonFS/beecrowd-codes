#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int vet[MAX];

int main(int argc, char * * argv) {
	int p, n, x;
	vector<int> num;
	scanf("%d%d", &p, &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &x);
		num.pb(x);
	}
	sort(all(num));
	bool ok = true;
	for(int i = 0; i < n; i++)
		vet[num[i]]++;
	int t = (n / p);
	int pri = n - (t * p);
	for(int i = 1; i <= pri; i++) {
		if(vet[i] != t + 1)
			ok = false;
	}
	for(int i = pri + 1; i <= p; i++) {
		if(vet[i] != t)
			ok = false;
	}
	if(ok)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
