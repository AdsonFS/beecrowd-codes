#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1000000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int t, n, m;
	string str, aux;
	while(scanf("%d", &t) && t != 0) {
		int menor = INF;
		for(int i = 0; i < t; i++) {
			cin >> str >> n >> m;
			if((n-m) < menor) {
				menor = (n-m);
				aux = str;
			}
		}
		printf("%s\n", aux.c_str());
	}
	return 0;
}
