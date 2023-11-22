#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1000002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
string str = "ABCDEFGHIJKLMNOP";
char vet[10][10];

int main(int argc, char ** argv) {
	int p = 0;
	int x1, x2;
	for(int i = 0; i < 16; i += 2) {
		scanf("%d%d", &x1, &x2);
		if(x1 > x2)
			vet[0][p++] = str[i];
		else
			vet[0][p++] = str[i+1];
	}
	p = 0;
	for(int i = 0; i < 8; i += 2) {
		scanf("%d%d", &x1, &x2);
		if(x1 > x2)
			vet[1][p] = vet[0][i];
		else
			vet[1][p] = vet[0][i + 1];
		p++;
	}
	
	p = 0;
	for(int i = 0; i < 4; i += 2) {
		scanf("%d%d", &x1, &x2);
		if(x1 > x2)
			vet[2][p] = vet[1][i];
		else
			vet[2][p] = vet[1][i + 1];
		p++;
	}
	
	p = 0;
	scanf("%d%d", &x1, &x2);
	if(x1 > x2)
		vet[3][p] = vet[2][p];
	else
		vet[3][p] = vet[2][p + 1];
	printf("%c\n", vet[3][0]);
	return 0;
}