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
string res;

void bin(int n) {
	int q = n / 2;
	if(q) bin(q);
	printf("%d", n - (q * 2));
}

void hex(int n) {
	int q = n / 16;
	if(q) hex(q);
	if(n - (q * 16) < 10)
		printf("%d", n - (q * 16));
	else {
		switch(n - (q * 16)) {
			case 10: printf("a"); break;
			case 11: printf("b"); break;
			case 12: printf("c"); break;
			case 13: printf("d"); break;
			case 14: printf("e"); break;
			case 15: printf("f"); break;
		}
	}
}

int achar(char c) {
	if(c >= '0' && c <= '9')
		return (c - '0');
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
	int n, h = 1;
	char x1[50], x2[50];
	scanf("%d", &n);
	while(n--) {
		cin >> x1 >> x2;
		printf("Case %d:\n", h++);
		if(!strcmp(x2, "dec")) {
			hex(atoi(x1));
			printf(" hex\n");
			bin(atoi(x1));
			printf(" bin\n");
		}
		else if(!strcmp(x2, "bin")) {
			int v = 0;
			int tam = strlen(x1) - 1;
			for(int i = tam, j = 0; i >= 0; i--, j++)
				v += (x1[i] - '0') * pow(2, j);
			printf("%d dec\n", v);
			hex(v);
			printf(" hex\n");
		}
		else {
			int v = 0, x;
			int tam = strlen(x1) - 1;
			for(int i = tam, j = 0; i >= 0; i--, j++) {
				x = achar(x1[i]);
				v += x * pow(16, j);
				
			}
			printf("%d dec\n", v);
			bin(v);
			printf(" bin\n");
		}
		printf("\n");
	}
	return 0;
}
