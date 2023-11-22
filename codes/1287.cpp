#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;


int main(int argc, char * * argv) {
	char c, x1[MAX], x2[MAX];
	while(!cin.getline(x1, MAX).eof()) {
		int p = 0, zero = 0;
		int erro = 0;
		int tam = strlen(x1);
		for(int i = 0; i < tam; i++) {
			c = x1[i];
			if(c == '0' && p == 0)
				zero = 1;
			else if(c >= '0' && c <= '9')
				x2[p++] = c;
			else if(c == 'l')
				x2[p++] = '1';
			else if(c == 'O' || c == 'o')
				x2[p++] = '0';
			else if(c != ' ' && c != ',')
				erro = 1;
		}
		if(p > 0 && erro == 0) {
			x2[p] = '\0';
			tam = strlen(x2);
			if(tam > 10)
				printf("error\n");
			else {
				ll x = 0, h = 1;
				for(int i = tam-1; i >= 0; i--) {
					x += (x2[i] - '0') * h;
					h = h * 10;
				}
				if(x > 2147483647 || x < 0)
					printf("error\n");
				else
					printf("%ld\n", x);
			}
		}
		else if(zero == 1 && erro == 0)
			printf("0\n");
		else
			printf("error\n");
	}
	return 0;
}
