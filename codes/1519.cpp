#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
char vet[MAX];
char c;

int main(int argc, char** argv) {
	int x1, x2, y1, y2;
	while(cin.getline(vet, MAX)) {
		string aux = vet;
		if(aux == ".") break;
		aux += "  ";
		string str;
		vector<string> num;
		map<char, string> mapa;
		map<string, int> qntd;
		set<char> ord;
		set<char>::iterator it;
		int tam = aux.size();
		for(int i = 0; i < tam; i++) {
			if(i == tam - 1) break;
			if(aux[i] != ' ')
				str.pb(aux[i]);
			else {
				num.pb(str);
				qntd[str]++;
				str.clear();
			}
		}
		tam = num.size();
		for(int i = 0; i < tam; i++) {
			c = num[i][0];
			x1 = num[i].size() * qntd[num[i]];
			x2 = qntd[num[i]] * 2;
			y1 = mapa[c].size() * qntd[mapa[c]];
			y2 = qntd[mapa[c]] * 2;
			if(x1 - x2 > y1 - y2)
				mapa[c] = num[i];
		}
		for(int i = 0; i < tam; i++) {
			if(num[i] == mapa[num[i][0]]) {
				printf("%c.", num[i][0]);
				ord.insert(num[i][0]);
			}
			else
				printf("%s", num[i].c_str());
			if(i != tam - 1) printf(" ");
			else printf("\n");
		}
		printf("%d\n", ord.size());
		for(it = ord.begin(); it != ord.end(); it++)
			printf("%c. = %s\n", *it, mapa[*it].c_str());
	}
	return 0;
}
