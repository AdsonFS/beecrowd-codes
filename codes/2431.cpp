#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

bool ver(int a, int A, int b, int B) {
	return (a >= A && b >= B);
}

int main(int argc, char** argv) {
	int a1, b1, a2, b2, a, b;
	while(scanf("%d%d%d", &a1, &b1, &a2) != EOF) {
		scanf("%d%d%d", &b2, &a, &b);
		bool ok = false;
		if(ver(min(a1, a2), a, b1 + b2, b)) ok = true;
		if(ver(min(a1, a2), b, b1 + b2, a)) ok = true;
		
		if(ver(min(a1, b2), a, b1 + a2, b)) ok = true;
		if(ver(min(a1, b2), b, b1 + a2, a)) ok = true;
		
		if(ver(min(b1, b2), a, a1 + a2, b)) ok = true;
		if(ver(min(b1, b2), b, a1 + a2, a)) ok = true;
		
		if(ver(min(b1, a2), a, a1 + b2, b)) ok = true;
		if(ver(min(b1, a2), b, a1 + b2, a)) ok = true;
		
		if(ver(a1, a, b1, b)) ok = true;
		if(ver(a1, b, b1, a)) ok = true;
		
		if(ver(a2, a, b2, b)) ok = true;
		if(ver(a2, b, b2, a)) ok = true;
		
		printf("%c\n", ok ? 'S' : 'N');
	}
	return 0;
}

