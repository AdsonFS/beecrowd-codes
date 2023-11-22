#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int n, x;
	while(scanf("%d", &n) != EOF) {
		int um = n/3;
		for(int i = 0; i < n; i++) {
			
			for(int j = 0; j < n; j++) {
				if(i == (n/2) && j == (n/2))
					x = 4;
				else if(i >= um && i <= n - um - 1 && j >= um && j <= n - um - 1)
					x = 1;
				else if(i == j)
					x = 2;
				else if(i == n - j - 1)
					x = 3;
				else
					x = 0;
				printf("%d", x);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
