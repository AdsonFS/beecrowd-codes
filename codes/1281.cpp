#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int t, n, k;
	string str;
	double x;
	scanf("%d", &t);
	while(t--){
		double sum = 0;
		scanf("%d", &n);
		map<string, double> mapa;
		for(int i = 0; i < n; i++) {
			cin >> str >> x;
			mapa[str] = x;
		}
		scanf("%d", &n);
		for(int i = 0; i < n; i++) {
			cin >> str >> k;
			sum += mapa[str] * k;
		}
		printf("R$ %.2lf\n", sum);
	}
	return 0;
}
