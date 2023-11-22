#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAXM 50010
#define MAXN 50010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	string cpf;
	while(cin >> cpf) {
		int b1 = 0;
		int b2 = 0;
		for(int i = 0, j = 9; i < 9; i++, j--) {
			b1 += (cpf[i] - '0') * (i+1);
			b2 += (cpf[i] - '0') * j;
			printf("%c", cpf[i]);
			if(i == 2 || i == 5)
				printf(".");
		}
		b1 = (b1 % 11) % 10;
		b2 = (b2 % 11) % 10;
		printf("-%d%d\n", b1, b2);
	}
	return 0;
}
