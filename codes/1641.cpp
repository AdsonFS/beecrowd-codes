#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;

int main(int argc, char const ** argv) {
	int R, W, L, h = 1;
	while(1 < 2) {				// loop infinito
		cin >> R;
		if(R == 0) break;		// condicao de fim de programa
		cin >> W >> L;			// se R não for 0, continua lendo a entrada normal
		if(hypot(W/2.0, L/2.0) <= R) cout << "Pizza " << h << " fits on the table." << endl;
		else cout << "Pizza " << h << " does not fit on the table." << endl;
		h++;
	}
	return 0;
}
