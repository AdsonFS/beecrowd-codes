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

int main(int argc, char** argv) {
	int x1, x2;
	vector<int> num;
	while(scanf("%d%d", &x1, &x2) != EOF) {
		int v = __gcd(x1, x2);
		num.pb(v);
		if(v > 5) printf("Noel\n");
		else printf("Gnomos\n");
	}
	int tam = num.size() - 1;
	for(int i = tam; i >= 0; i--)
		printf("%d ", num[i]);
	printf("\n");
	return 0;
}
