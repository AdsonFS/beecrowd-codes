#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[12][12];

int main(int argc, char** argv) {
	int n;
	int sum = 0;
	set<int> list;
	scanf("%d", &n);
	rep(i, 0, n) {
		sum = 0;
		rep(j, 0, n) {
			scanf("%d", &vet[i][j]);
			sum += vet[i][j];
		}
		list.insert(sum);
	}
	rep(i, 0, n) {
		sum = 0;
		rep(j, 0, n)
			sum += vet[j][i];
		list.insert(sum);
	}
	sum = 0;
	rep(i, 0, n)
		sum += vet[i][i];
	list.insert(sum);
	sum = 0;
	rep(i, 0, n) {
		sum += vet[i][n - 1 - i];
	}
	list.insert(sum);
	
	printf("%d\n", list.size() == 1 ? sum : -1);
	return 0;
}
