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
#define MAX 100
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<char, char> cc;
typedef pair<int, cc> pcc;
typedef unsigned long long int ull;

bool comp(const pcc &p1, const pcc &p2) {
	if(p1.F != p2.F) return (p1.F > p2.F);
	if(p1.S.F != p2.S.F) return (p1.S.F < p2.S.F);
	return (p1.S.S < p2.S.S);
}

int main(int argc, char** argv) {
	int n;
	while(scanf("%d", &n) && n) {
		map<cc, int> mapa;
		map<cc, int> :: iterator it;
		vector<pcc> num;
		string str;
		char aux[100];
		cin.ignore();
		rep(i, 0, n) {
			cin.getline(aux, MAX);
			str += aux;
		}
		int tam = str.size() - 1;
		REP(i, 1, tam)
			mapa[cc(str[i-1], str[i])]++;
		for(it = mapa.begin(); it != mapa.end(); it++)
			num.pb(mk(it->S, cc(it->F.F, it->F.S)));
		sort(all(num), comp);
		int t = tam;
		tam = num.size();
		for(int j = 0; j < 5; j++) {
			if(j == tam) break;
			printf("%c%c %d %.6lf\n", num[j].S.F, num[j].S.S, num[j].F, (double)(num[j].F * 1.0)/ t);
		}
		printf("\n");
	}
	return 0;
}

