#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n;
	char nome[20];
	scanf("%d", &n);
	while(n--) {
		char c;
		int sum = 1;
		scanf(" %s", nome);
		int tam = strlen(nome);
		for(int i = 0; i < tam; i++) {
			c = tolower(nome[i]);
			if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 's')
				sum = sum * 3;
			else
				sum = sum * 2;
		}
		printf("%d\n", sum);
	}
	return 0;
}
