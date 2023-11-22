#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
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
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n;
	char num[10], dig[10];
	while(scanf("%d", &n) != EOF) {
		vector<string> pac;
		while(1 < 2) {
			scanf(" %s", num);
			if(strcmp(num, "0") == 0) break;
			scanf(" %s", dig);
			pac.pb(dig);
		}
		sort(all(pac));
		int tam = pac.size();
		for(int i = 0; i < tam; i++)
			printf("Package %s\n", pac[i].c_str());
		printf("\n");
	}
	return 0;
}
