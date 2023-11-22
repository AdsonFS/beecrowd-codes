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
	set<int> aux;
	queue<int> fila;
	int n, m, k, sum;
	set<int>::iterator it;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++) {
		scanf("%d", &k);
		aux.insert(k);
	}
	sum = INF;
	k = n - m;
	for(it = aux.begin(); it != aux.end(); it++) {
		fila.push(*it);
		if(fila.size() == k) {
			sum = min(abs(fila.front() - fila.back()), sum);
			fila.pop();
		}
	}
	printf("%d\n", sum);
	return 0;
}
