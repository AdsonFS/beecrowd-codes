#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char ** argv) {
	int ini[30];
	int fim[30];
	int map[30];
	int n, ind, aux, rep;
	while(scanf("%d", &n) != EOF) {
		int sum = 0;
		for(int i = 0; i < n; i++) {
			scanf("%d", &ini[i]);
			map[ini[i]] = i;
		}
		for(int i = 0; i < n; i++) {
			scanf("%d", &fim[i]);
			for(int j = i; j < n; j++)
				if(ini[j] == fim[i]) {
					ind = j;
					break;
				}
			rep = ind - i;
			while(rep--) {
				sum++;
				aux = ini[ind];
				ini[ind] = ini[ind-1];
				ini[ind-1] = aux;
				ind--;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
