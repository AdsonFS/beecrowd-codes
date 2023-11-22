#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int a, v, x1, x2, h = 1;
	while(scanf("%d%d", &a, &v) && (a+v) != 0) {
		int maior = -1;
		bool pri = true;
		vector<int> num[101];
		for(int i = 0; i < v; i++) {
			scanf("%d%d", &x1, &x2);
			num[x1].pb(x2);
			num[x2].pb(x1);
			int X = num[x1].size(), XX = num[x2].size();
			maior = max(maior, max(X, XX));
		}
		printf("Teste %d\n", h++);
		for(int i = 1; i <= a; i++) {
			if(num[i].size() == maior)
				printf("%d ", i);
		}
		printf("\n\n");
	}
	return 0;
}
