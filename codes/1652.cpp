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

bool ver_c(string str) {
	int p = str.size() - 2;
	return (str[p] != 'a' && str[p] != 'e' && str[p] != 'i' && str[p] != 'o' && str[p] != 'u');
}

bool ver_2(string str) {
	int p = str.size() - 1;
	return ((str[p] == 'o' || str[p] == 's' || str[p] == 'x') || (str[p] == 'h' && (str[p-1] == 'c' || str[p-1] == 's')));
}

int main(int argc, char ** argv) {
	int n, m;
	char com1[50];
	char com2[50];
	map<string, string> mapa;
	scanf("%d%d", &n, &m);
	while(n--) {
		scanf(" %s %s", com1, com2);
		mapa[com1] = com2;
	}
	while(m--) {
		scanf(" %s", com1);
		string str = com1;
		string ans = str;
		int tam = str.size() - 1;
		if(mapa.count(com1) > 0) ans = mapa[com1];
		else if(str[tam] == 'y' && ver_c(str)) {
			ans[tam] = 'i';
			ans += "es";
		}
		else if(ver_2(str)) ans += "es";
		else ans.pb('s');
		printf("%s\n", ans.c_str());
	}
	return 0;
}
