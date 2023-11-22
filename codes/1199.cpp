#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 50000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

void hex(int n) {
	int q = n / 16;
	if(q) hex(q);
	if(n - (q * 16) < 10)
		printf("%d", n - (q * 16));
	else {
		switch(n - (q * 16)) {
			case 10: printf("A"); break;
			case 11: printf("B"); break;
			case 12: printf("C"); break;
			case 13: printf("D"); break;
			case 14: printf("E"); break;
			case 15: printf("F"); break;
		}
	}
}

int achar(char c) {
	if(c >= '0' && c <= '9')
		return (c - '0');
	c = tolower(c);
	switch(c) {
			case 'a': return 10;
			case 'b': return 11;
			case 'c': return 12;
			case 'd': return 13;
			case 'e': return 14;
			case 'f': return 15;
	}
	return 0;
}

int main(int argc, char ** argv) {
	char x1[50];
	while(cin >> x1) {
		if(x1[0] == '-') break;
		int tam = strlen(x1) - 1;
		if(x1[1] == 'x' && tam >= 3) {
			int v = 0, x;
			for(int i = tam, j = 0; i >= 2; i--, j++) {
				x = achar(x1[i]);
				v += x * pow(16, j);	
			}
			printf("%d\n", v);
		}
		else {
			printf("0x");
			hex(atoi(x1));
			printf("\n");
		}
	}
	return 0;
}
