#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 2100
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int t, v, b, ev, l, h;

int main(int argc, char ** argv) {
	char nome[100];
	scanf("%d", &t);
	while(t--) {
		scanf(" %s %d", nome, &l);
		printf("Caso #%d: %s nivel %d\n", ++h, nome, l);
		scanf("%d%d%d", &b, &v, &ev);
		int ans = ((((v + b + (sqrt(ev)/8) + 50) * l) / 50.0) + 10);
		printf("HP: %d\n", ans);
		
		scanf("%d%d%d", &b, &v, &ev);
		ans = ((((v + b + (sqrt(ev)/8) + 0) * l) / 50.0) + 5);
		printf("AT: %d\n", ans);
		
		scanf("%d%d%d", &b, &v, &ev);
		ans = ((((v + b + (sqrt(ev)/8) + 0) * l) / 50.0) + 5);
		printf("DF: %d\n", ans);
		
		scanf("%d%d%d", &b, &v, &ev);
		ans = ((((v + b + (sqrt(ev)/8) + 0) * l) / 50.0) + 5);
		printf("SP: %d\n", ans);
	}
	return 0;
}
