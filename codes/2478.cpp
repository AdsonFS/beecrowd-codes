#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	int n;
	string nome, x1, x2, x3;
	scanf("%d", &n);
	map<string, string> m1, m2, m3;
	for(int i = 0; i < n; i++) {
		cin >> nome >> x1 >> x2 >> x3;
		m1[nome] = x1;
		m2[nome] = x2;
		m3[nome] = x3;
	}
	while(cin >> nome >> x1) {
		if(m1[nome] == x1 || m2[nome] == x1 || m3[nome] == x1)
			printf("Uhul! Seu amigo secreto vai adorar o/\n");
		else printf("Tente Novamente!\n");
	}
	return 0;
}
