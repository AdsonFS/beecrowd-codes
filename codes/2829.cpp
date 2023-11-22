#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 5010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

bool comp(const pair<string, int> x1, const pair<string, int> & x2) {
	if(x1.F != x2.F)
		return (x1.F < x2.F);
	return (x1.S < x2.S);
}

int main(int argc, char ** argv) {
	int n;
	string str;
	scanf("%d", &n);
	vector<string> aux;
	map<int, string> mapa;
	vector<pair<string, int> > num;
	
	for(int i = 0; i < n; i++) {
		cin >> str;
		aux.pb(str);
	}
	sort(all(aux));
	
	for(int i = 0; i < n; i++) {
		str = aux[i];
		int tam = str.size();
		mapa[i] = str;
		for(int j = 0; j < tam; j++)
			str[j] = tolower(str[j]);
		num.pb(mk(str, i));
	}
	sort(all(num), comp);
	
	for(int i = 0; i < n; i++) {
		printf("%s\n", mapa[num[i].S].c_str());
	}
	return 0;
}
