#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10002
#define S second
#define F first
#define xxx cout << "aqui\n"

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int n, m, x;
	while(scanf("%d%d", & n, & m) && (n+m) != 0) {
		int fim[] = {1, 1, 1, 1};
		int feito[100];
		for(int i = 0; i < m; i++)
			feito[i] = 0;
		int sum = 0;
		int res;
		for(int i = 0; i < n; i++) {
			res = 0;
			for(int j = 0; j < m; j++) {
				scanf("%d", &x);
				res += x;
				feito[j] += x;
			}
			if(res == m)
				fim[0] = 0;
			if(res == 0)
				fim[3] = 0;
		}
		for(int i = 0; i < m; i++) {
			if(feito[i] == 0)
				fim[1] = 0;
			else if(feito[i] == n)
				fim[2] = 0;
		}
		
		for(int i = 0; i < 4; i++)
			sum += fim[i];
		printf("%d\n", sum);
	}
	return 0;
}
