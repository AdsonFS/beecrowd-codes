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
	int t, n;
	string str;
	string vet[101];
	scanf("%d", &t);
	while(t--) {
		int h = 0;
		scanf("%d", &n);
		for(int j = 0; j < n; j++) {
			cin >> vet[j];
		}
		for(int j = 0; j < n; j++) {
			cin >> str;
			int tam = str.size();
			int sum = 0;
			int qntd = 0;
			for(int i = 0; i < tam; i++) {
				if(str[i] != 'M') {
					qntd++;
					if(str[i] == 'P')
						sum++;
				}
			}
			if((1.0 * sum) / qntd < 0.75) {
				if(h++ == 0) printf("%s", vet[j].c_str());
				else printf(" %s", vet[j].c_str());
			}
		}
		printf("\n");
	}
	return 0;
}
