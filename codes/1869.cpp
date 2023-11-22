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

void conv32(unsigned long long int n) {
	unsigned long long int q, r;
	q = n / 32;
	r = n - (q * 32);
	if(q)
		conv32(q);
	switch (r) {
            case 10: printf("A"); break;
            case 11: printf("B"); break;
            case 12: printf("C"); break;
            case 13: printf("D"); break;
            case 14: printf("E"); break;
            case 15: printf("F"); break;
            case 16: printf("G"); break;
            case 17: printf("H"); break;
            case 18: printf("I"); break;
            case 19: printf("J"); break;
            case 20: printf("K"); break;
            case 21: printf("L"); break;
            case 22: printf("M"); break;
            case 23: printf("N"); break;
            case 24: printf("O"); break;
            case 25: printf("P"); break;
            case 26: printf("Q"); break;
            case 27: printf("R"); break;
            case 28: printf("S"); break;
            case 29: printf("T"); break;
            case 30: printf("U"); break;
            case 31: printf("V"); break;
            default: printf("%lld", r);
	}
}

int main(int argc, char** argv) {
	unsigned long long int n;
	while(cin >> n) {
		conv32(n);
		printf("\n");
	}
	return 0;
}
