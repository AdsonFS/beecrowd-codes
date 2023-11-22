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


int main(int argc, char ** argv) {
	string str;
	int x, sum = 0, n = 0;
	while(cin >> str) {
		if(str == "ABEND")
			break;
		scanf("%d", &x);
		if(str == "SALIDA") {
			sum += x;
			n++;
		}
		else {
			sum -= x;
			n--;
		}
	}
	printf("%d\n%d\n", sum, n);
	return 0;
}
