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
ll fib[100], ans[70];

void setar() {
	int p = 1;
	fib[1] = 1;
	string str;
	char aux[30];
	for(int i = 2; i < 92; i++) {
		fib[i] = fib[i-1] + fib[i-2];
		sprintf(aux, "%lld", fib[i]);
		str = aux;
		if(fib[i] % 3 == 0 || str.find('3') != -1)
			ans[p++] = fib[i];
	}
}

int main(int argc, char** argv) {
	setar();
	int n;
	while(scanf("%d", &n) != EOF)
		printf("%lld\n", ans[n]);
	return 0;
}