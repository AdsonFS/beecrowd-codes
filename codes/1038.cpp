#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
int a, b;
double x;

int main(int argc, char** argv) {
	scanf("%d%d", &a, &b);
	if(a == 1) x = b * 4;
	else if(a == 2) x = b * 4.5;
	else if(a == 3) x = b * 5;
	else if(a == 4) x = b * 2;
	else x = b * 1.5	;
	printf("Total: R$ %.2lf\n", x);
	return 0;
}
