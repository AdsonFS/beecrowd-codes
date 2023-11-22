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
#define MAX 65556
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int t;
	char vet[110];
	scanf("%d", &t);
	while(t--) {
		scanf(" %[^\n]", vet);
		string ans = vet;
		string aux = vet;
		int p = aux.find("oulupukk");
		while(p != -1) {
			ans[p-1] = 'J';
			ans[p+8] = 'i';
			aux[p+2] = 'z';
			p = aux.find("oulupukk");
		}
		printf("%s\n", ans.c_str());
	}
	return 0;
}
