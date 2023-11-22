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

int main(int argc, char * * argv) {
	int t, v, ta, tam, ans;
	char vet[MAX], num[20];
	map<string, int> mapa;
	while(!cin.getline(vet, MAX).eof()) {
		v = 0;
		string str;
		string var;
		str = vet;
		str.pb(' ');
		t = str.find(' ');
		for(int i = 0; i < t; i++)
			var.pb(str[i]);
		ta = str.find('+') - 1;
		tam = str.size() - 1;
		if(ta < 0) {		// nao tem +
			int j = 0;
			ta = str.find('=') + 2;
			for(int i = ta; i < tam; i++)
				num[j++] = str[i];
			num[j] = '\0';
			v = atoi(num);
			mapa[var] = v;
		}
		else {
			int j = 0;
			ta = str.find('=') + 2;
			tam = str.find(" +");
			for(int i = ta; i < tam; i++)
				num[j++] = str[i];
			num[j] = '\0';
			mapa[var] += mapa[num];
			ta = str.find("+ ") + 2;
			tam = str.size() - 1;
			j = 0;
			for(int i = ta; i < tam; i++)
				num[j++] = str[i];
			num[j] = '\0';
			mapa[var] += mapa[num];
		}
		ans = mapa[var];
	}
	printf("%d\n", ans);
	return 0;
}
