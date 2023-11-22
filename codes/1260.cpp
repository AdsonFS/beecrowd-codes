#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1000000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int n, h = 0;
	char vet[50];
	scanf("%d", &n);
	cin.ignore();
	cin.getline(vet, 50);
	while(n--) {
		int total = 0;
		map<string, int> mapa;
		map<string, int>::iterator it;
		while(cin.getline(vet, 50)) {
			int tam = strlen(vet);
			if(tam == 0)
				break;
			mapa[vet]++;
			total++;
		}
		double t = 100.0 / (total*1.0);
		if(h++)
			printf("\n");
		for(it = mapa.begin(); it != mapa.end(); it++)
			printf("%s %.4lf\n", it->F.c_str(), it->second * t);
	}
	return 0;
}
