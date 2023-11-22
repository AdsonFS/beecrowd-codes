#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	ll x;
	int n, aux;
	while(scanf("%d", &n) != EOF) {
		map<ll, int> mapa; 
		map<ll, int>::iterator it;
		for(int i = 0; i < n; i++) {
			scanf("%lld", &x);
			mapa[x]++;
		}
		aux = 1;
		for(it = mapa.begin(); it != mapa.end(); it++) {
			if(aux && it->S % 2 != 0) {
				aux = 0;
				printf("%lld", it->F);
			}
			else if(it->S % 2 != 0) {
				printf(" %lld\n", it->F);
				break;
			}
		}
	}
	return 0;
}
