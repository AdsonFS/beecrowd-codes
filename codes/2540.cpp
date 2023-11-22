#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	int m, x, soma;
	while(scanf("%d", &m) != EOF) {
		soma = 0;
		for(int i = 0; i < m; i++) {
			scanf("%d", &x);
			soma += x;
		}
		if(soma >= m*2/3.0) printf("impeachment\n");
		else printf("acusacao arquivada\n");
	}
	return 0;
}