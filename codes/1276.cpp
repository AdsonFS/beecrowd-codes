#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 60
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	char vet[MAX];
	while(!cin.getline(vet, MAX).eof()) {
		int tam = strlen(vet);
		if(!tam) { printf("\n"); continue; }
		vector<char> num;
		vector<string> ans;
		rep(i, 0, tam) if(vet[i] != ' ') num.pb(vet[i]);
		sort(all(num));
		tam = num.size();
		bool ini = true;
		string aux;
		rep(i, 0, tam) {
			if(ini) {
				aux.clear();
				ini = false;
				aux.pb(num[i]);
				aux.pb(':');
				aux.pb(num[i]);
			}
			else if((int)num[i] - (int)num[i-1] == 1)
				aux[2] = num[i];
			else if(num[i] != num[i-1]){
				ini = true;
				ans.pb(aux);
			}
			if(ini) {
				aux.clear();
				ini = false;
				aux.pb(num[i]);
				aux.pb(':');
				aux.pb(num[i]);
			}
		}
		ans.pb(aux);
		tam = ans.size();
		rep(i, 0, tam) {
			printf("%s", ans[i].c_str());
			if(tam - 1 > i) printf(", ");
		}
		printf("\n");	
	}
	return 0;
}
