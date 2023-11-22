#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define MAX 25000000
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
vector<int> num;

void setar() {
	int n = 1;
	int x = 3;
	while(n <= MAX + 100) {
		num.pb(n);
		n += x;
		x += 2;
	}
}

int main(int argc, char * * argv) {
	setar();
	int n = MAX;
	int tam = num.size();
	while(scanf("%d", &n) && n != 0) {
		printf("1");
		int k = 1;
		while(num[k] <= n && k < tam) {
			printf(" %d", num[k++]);
		}
		printf("\n");
	}
	return 0;
}
