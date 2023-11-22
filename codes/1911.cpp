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

int main(int argc, char** argv) {
	int n, m, e, sum;
	string x1, x2, aux;
	while(scanf("%d", &n) && n) {
		map<string, string> mapa;
		for(int i = 0; i < n; i++) {
			cin >> x1 >> x2;
			mapa[x1] = x2;
		}
		scanf("%d", &m);
		sum = 0;
		while(m--) {
			cin >> x1 >> x2;
			aux = mapa[x1];
			e = 0;
			if(aux.size() != x2.size()) e++;
			int tam = x2.size();
			for(int i = 0; i < tam; i++) {
				if(aux[i] != x2[i])
					e++;
				if(e > 1) {
					sum++;
					break;
				}
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
