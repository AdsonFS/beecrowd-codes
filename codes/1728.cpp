#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	string str;
	int vet[3];
	while(cin >> str) {
		char c;
		int p = 0, h = 1;
		int tam = str.size();
		memset(vet, 0, sizeof(vet));
		for(int i = 0; i < tam; i++) {
			c = str[i];
			if(c >= '0' && c <= '9') {
				vet[p] += (c - '0') * h;
				h = h * 10;
			}
			else {
				p++;
				h = 1;
			}
		}
		if(vet[0] + vet[1] == vet[2])
			printf("True\n");
		else
			printf("False\n");
	}
	return 0;
}
