#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char ** argv) {
	int h = 0;
	string x1, x2;
	while(cin >> x1 >> x2 && x1 != "0") {
		if(h > 0)
			printf("\n");
		printf("Instancia %d\n", ++h);
		if(x2.find(x1) != -1)
			printf("verdadeira\n");
		else
			printf("falsa\n");
	}
	return 0;
}

