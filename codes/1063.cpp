#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	int n;
	char vet[MAX], res[MAX];
	while(scanf("%d", & n) && n) {
		// bool ok = true;
		for(int i = 0; i < n; i++)
			cin >> vet[i];
		for(int i = 0; i < n; i++)
			cin >> res[i];
		stack<char> pilha;
		pilha.push('Z');
		int p = 0, c = 0;
		while(p < n) {
			if(pilha.top() == res[p]) {
				printf("R");
				p++;
				pilha.pop();
			} else {
				if(c == n) break;
				printf("I");
				pilha.push(vet[c]);
				c++;
			}
		}
		if(p == n) printf("\n");
		else printf(" Impossible\n");
	}
	return 0;
}

