#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
vector<ll> num;

int busca(int ini, int fim, int V) {
	int mid = (ini + fim) / 2;
	if(num[mid] == V)
		return mid;
	if(num[mid] > V)
		return busca(ini, mid-1, V);
	return busca(mid + 1, fim, V);
}

int main(int argc, char ** argv) {
	ll x;
	int n, m;
	int atual;
	int id = 0;
	int sum = 0;
	
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++) {
		cin >> x;
		num.pb(x);
	}
	atual = num[0];
	for(int i = 0; i < m; i++) {
		cin >> x;
		int v;
		if(num[id] > x)
			v = busca(0, id-1, x);
		else
			v = busca(id, n-1, x);
		sum += abs(v - id);
		id = v;
	}
	printf("%d\n", sum);
	return 0;
}
