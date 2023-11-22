#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1100
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int calc(int d, int m) {
	int mes[13], soma = 0;
	int x = 31;
	mes[0] = 0;
	mes[1] = x, mes[3] = x, mes[5] = x, mes[7] = x, mes[8] = x, mes[10] = x, mes[12] = x;
	x = 30;
	mes[4] = x, mes[6] = x, mes[9] = x, mes[11] = x;
	mes[2] = 29;
	for(int i = 1; i < m; i++)
		soma += mes[i];
	soma += d;
	return (soma);
}

int main(int argc, char** argv) {
	int x = calc(25, 12);
	int n, m;
	while(scanf("%d%d", &n, &m) != EOF) {
		int y = calc(m, n);
		if(y == x)
			printf("E natal!\n");
		else if(y > x)
			printf("Ja passou!\n");
		else if(y + 1 == x)
			printf("E vespera de natal!\n");
		else
			printf("Faltam %d dias para o natal!\n", x - y);
	}
	return 0;
}