#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	vector<int> num;
	num.pb(a); num.pb(b); num.pb(c);
	sort(all(num), greater<int>());
	if(num[1] + num[2] > num[0]) {
		if(a == b && b == c)
			printf("Valido-Equilatero\n");
		else if(a == b || a == c || b == c)
			printf("Valido-Isoceles\n");
		else if(a != b && a != c && b != c)
			printf("Valido-Escaleno\n");
		if(num[0] * num[0] == (num[1] * num[1]) + (num[2] * num[2]))
			printf("Retangulo: S\n");
		else
			printf("Retangulo: N\n");
	}
	else
		printf("Invalido\n");
	return 0;
}

