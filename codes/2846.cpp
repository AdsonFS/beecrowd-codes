#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = int (a); i < int (b); i++)
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10000000
#define pi 3.1415
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int fib[MAX];
vector<int> num;
int sum;

void calc(int x, int j) {
	for(int i = x; i <= j; i++) {
		sum++;
		num.pb(i);
	}
}

int main(int argc, char *argv[]) {
	fib[0] = 1;
	fib[1] = 1;
	
	int n, i = 2;
	scanf("%d", &n);
	while(true) {
		fib[i] = fib[i-1] + fib[i-2];
		if(fib[i] - fib[i - 1] > 1)
			calc(fib[i-1] + 1, fib[i] - 1);
		if(sum >= n)
			break;
		i++;
	}
	printf("%d\n", num[n-1]);
	
	return 0;
}