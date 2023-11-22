#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define MAX 1000000000000000001
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	char nome[1000];
	string str;
	int n, m, x;
	scanf("%d%d", &n, &m);
	while(n--) {
		while(cin >> nome) {
			if(nome[0] >= '1' && nome[0] <= '9') {
				x = atoi(nome);
				break;
			}
			str = str + nome + " ";
		}
		if(x > m) {
			int tam = str.size();
			for(int i = 0; i < tam - 1; i++)
				printf("%c", str[i]);
			printf("\n");
		}
		str.clear();
	}	
	return 0;
}
