#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define MAXD 100000005
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX];
int n, m;

int busca(int ini, int fim) {
	int sum = 0;
	int mid = (ini+fim) / 2;
	if(ini >= fim) return mid;
	for(int i = 0; i < n; i++)
		sum += mid / vet[i];
	if(sum >= m) return busca(ini, mid);
	else return busca(mid+1, fim);
}

int main(int argc, char** argv) {
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
		scanf("%d", &vet[i]);
	printf("%d\n", busca(1, MAXD));
	return 0;
}
