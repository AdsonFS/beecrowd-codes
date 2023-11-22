#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 105

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int V[MAX][MAX];

int main(int argc, char ** argv) {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n+1; i++)
		for(int j = 0; j < n+1; j++)
			scanf("%d", &V[i][j]);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(V[i][j] + V[i][j+1] + V[i+1][j] + V[i+1][j+1] > 1)
				printf("S");
			else
				printf("U");
		}
		printf("\n");
	}
	return 0;
}
