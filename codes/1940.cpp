#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv){
	int n, m, x, maior = -1, v;
	map<int, int> mapa;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < (n*m); i++) {
		int j = 1 + (i % n);
		scanf("%d", &x);
		int X = mapa[j] += x;
		if(X >= maior) {
			maior = X;
			v = j;
		}
	}
	printf("%d\n", v);
	return 0;
}
