#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int pos[MAX][MAX];
int pon[MAX][MAX];

int main(int argc, char * * argv) {
	int g, p, s, maior;
	while(scanf("%d%d", & g, & p) && (g + p)) {
		for(int i = 1; i <= g; i++) {
			for(int j = 1; j <= p; j++)
				scanf("%d", & pos[i][j]);
		}
		scanf("%d", & s);
		memset(pon, 0, sizeof(pon));
		for(int i = 1; i <= s; i++) {
			scanf("%d", & pon[i][0]);
			for(int j = 1; j <= pon[i][0]; j++)
				scanf("%d", & pon[i][j]);
		}
		for(int i = 1; i <= s; i++) {
			maior = -1;
			set<int> ans;
			set<int> :: iterator it;
			vector<int> num(110);
			for(int k = 1; k <= g; k++) {
				for(int j = 1; j <= p; j++) {
					num[j] += pon[i][pos[k][j]];
					if(num[j] > maior) {
						ans.clear();
						maior = num[j];
						ans.insert(j);
					} else if(num[j] == maior)
						ans.insert(j);
				}
			}
			it = ans.begin();
			printf("%d", * it);
			while(++it != ans.end())
				printf(" %d", * (it));
			printf("\n");
		}
	}
	return 0;
}
