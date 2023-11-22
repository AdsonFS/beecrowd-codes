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
#define MAX 100010
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char ** argv) {
	int n, v, ans, aux;
	while(scanf("%d%d", &n, &v) && (n+v)) {
		bool ok = false;
		int velocidade = 1;
		int velocidade_aux = v;
		while(velocidade <= velocidade_aux && !ok) {
			ans = 0;
			v = velocidade;
			while(v != 0) {
				aux = v * v;
				if(n <= ans + aux) {
					if((n - ans) % v == 0) ok = true;
					break; 
				}
				ans += aux;
				v--;
			}
			velocidade++;
		}
		if(ok) printf("possivel\n");
		else printf("impossivel\n");
	}
	return 0;
}
