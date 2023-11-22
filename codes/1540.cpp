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

int main(int argc, char ** argv) {
	int n, a, b, c, d;
	scanf("%d", &n);
	while(n--) {
		int j = 0;
		char ans[20];
		scanf("%d%d%d%d", &a, &b, &c, &d);
		sprintf(ans, "%.5lf", (double)(d - b) / (c-a));
		int tam = strlen(ans);
		rep(i, 0, tam) {
			if(ans[i] == '.') ans[i] = ',';
			if(ans[i] == ',' || j) j++;
			printf("%c", ans[i]);
			if(j == 3) break;
		}
		printf("\n");
	}
	return 0;
}
