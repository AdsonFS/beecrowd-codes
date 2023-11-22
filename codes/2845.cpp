#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = int (a); i < int (b); i++)
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10002
#define pi 3.1415
#define S second
#define F first

typedef long long int ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[]) {
	int n, x;
	int m = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x;
		m = max(x, m);
	}
	printf("%d\n", m+1);
	
	return 0;
}