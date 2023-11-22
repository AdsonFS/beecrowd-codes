#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define MAX 1000000000000000001
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int n;
	while(cin >> n) {
		if(n == 0) break;
		int maior = n;
		while(n != 1) {
			if(n % 2 == 0)
				n = n / 2;
			else
				n = (3 * n) + 1;
			maior = max(maior, n);
		}
		printf("%d\n", maior);
	}
	return 0;
}
