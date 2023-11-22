#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
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
char vet[MAX];
string aux;

int main(int argc, char ** argv) {
	int maior = -1;
	set<string> st;
	cin.getline(vet, MAX);
	int tam = strlen(vet);
	map<string, int> mapa;
	map<string, int> :: iterator it;
	for(int i = 1; i < tam; i++) {
		aux = tolower(vet[i-1]);
		aux.pb(tolower(vet[i]));
		mapa[aux]++;
	}
	for(it = mapa.begin(); it != mapa.end(); it++) {
		if(it->S == maior) st.insert(it->F);
		else if(it->S > maior) {
			maior = it->S;
			st.clear();
			st.insert(it->F);
		}
	}
	printf("%s:%d\n", (*st.begin()).c_str(), maior);
	return 0;
}
