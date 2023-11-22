#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int vet[MAX];

bool ver1(int i) {
	return ((vet[i] < vet[i-1]) && (vet[i] < vet[i+1]));
}

bool ver2(int i) {
	return ((vet[i] > vet[i-1]) && (vet[i] > vet[i+1]));
}

int main(int argc, char** argv) {
	int n;
	while(scanf("%d", &n), n) {
		int sum = 0;
		for(int i = 1; i <= n; i++)
			scanf("%d", &vet[i]);
		vet[0] = vet[n];
		vet[n+1] = vet[1];
		for(int i = 1; i <= n; i++)
			if(ver1(i) || ver2(i))
				sum++;
		printf("%d\n", sum);
	}
	return 0;
}
