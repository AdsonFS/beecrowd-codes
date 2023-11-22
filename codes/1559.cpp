#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = "<< x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
bool d, l, r, u, ok, OK;
int vet[6][6];
int t;

int main(int argc, char ** argv) {
	memset(vet, -1, sizeof(vet));
	scanf("%d", &t);
	while(t--) {
		vector<string> num;
		d = l = r = u = ok = OK = false;
		REP(i, 1, 4)
			REP(j, 1, 4)
				scanf("%d", &vet[i][j]);
		REP(i, 1, 4) {
			REP(j, 1, 4) {
				if(vet[i][j] == 2048) OK = true;
				if(OK) break;
				if(vet[i][j]) {
					if(!d && (vet[i+1][j] == vet[i][j] || vet[i+1][j] == 0)) {
						if(vet[i+1][j] == 1024) ok = true;
						num.pb("DOWN");
						d = true;
					}
					if(!l && (vet[i][j-1] == vet[i][j] || vet[i][j-1] == 0)) {
						if(vet[i][j-1] == 1024) ok = true;
						num.pb("LEFT");
						l = true;
					}
					if(!r && (vet[i][j+1] == vet[i][j] || vet[i][j+1] == 0)) {
						num.pb("RIGHT");
						r = true;
					}
					if(!u && (vet[i-1][j] == vet[i][j] || vet[i-1][j] == 0)) {
						num.pb("UP");
						u = true;
					}
				}
			}
		}
		int tam = num.size();
		if(tam && !OK) {
			sort(all(num));
			printf("%s", num[0].c_str());
			rep(i, 1, tam) printf(" %s", num[i].c_str());
			printf("\n");
		}
		else printf("NONE\n");
	}
	return 0;
}
