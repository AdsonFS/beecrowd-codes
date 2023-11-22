#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n;
	int vet[12];
	int sum = 0;
	int maior = -1;
	bool ok = false;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", vet + i);
		sum += vet[i];
		maior = max(maior, vet[i]);
	}
	double best = (maior * 100.0) / sum;
	if(best >= 45) ok = true;
	else if(best >= 40){
		ok = true;
		for(int i = 0; i < n; i++) {
			if(vet[i] != maior && best - ((vet[i] * 100.0) / sum) < 10)
				ok = false;
		}
	}
	if(ok) printf("1\n");
	else printf("2\n");
	return 0;
}
