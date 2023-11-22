#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 125000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	int n, h = 0;
	while(scanf("%d", &n) && n != -1) {
		printf("Teste %d\n", ++h);
		switch(n) {
			case 0: printf("4\n");	break;
			case 1: printf("9\n");	break;
			case 2: printf("25\n");	break;
			case 3: printf("81\n");	break;
			case 4: printf("289\n");	break;
			case 5: printf("1089\n");	break;
			case 6: printf("4225\n");	break;
			case 7: printf("16641\n");	break;
			case 8: printf("66049\n");	break;
			case 9: printf("263169\n");	break;
			case 10: printf("1050625\n");	break;
			case 11: printf("4198401\n");	break;
			case 12: printf("16785409\n");	break;
			case 13: printf("67125249\n");  break;
			case 14: printf("268468225\n");	break;
			case 15: printf("1073807361\n");	break;
		}
		printf("\n");
	}
	return 0;
}
