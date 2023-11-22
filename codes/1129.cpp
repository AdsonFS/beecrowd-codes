#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 1000002

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
string res = "ABCDE";

int main(int argc, char ** argv) {
	int n, x, p;
	while(scanf("%d", &n) && n != 0) {
		while(n--) {
			int s = 0;
			for(int i = 0; i < 5; i++) {
				scanf("%d", &x);
				if(x <= 127) {
					p = i;
					s++;
				}
			}
			if(s != 1)
				printf("*\n");
			else
				printf("%c\n", res[p]);
		}
	}
	return 0;
}
