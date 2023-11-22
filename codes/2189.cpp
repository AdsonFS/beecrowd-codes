#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<char, int> ci;
const int MAX = 1e4+4;
int N, h, x;

int main(int argc, char ** argv) {
	while(scanf("%d", &N) && N) {
		printf("Teste %d\n", ++h);
		REP(i, 1, N) { 
			scanf("%d", &x);
			if(x == i) printf("%d\n\n", x);
		}
	}
	return 0;
}
