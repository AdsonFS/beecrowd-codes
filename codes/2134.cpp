#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define MAX 1000000008
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

bool comp(const pair<int, string> &x1, const pair<int, string> &x2) {
	if(x1.F != x2.F)
		return (x1.F < x2.F);
	return (x1.S > x2.S);
}

int main(int argc, char * * argv) {
	int n, x, h = 1;
	string nome;
	while(scanf("%d", &n) != EOF){
		vector<pair<int, string> > num;
		for(int i = 0; i < n; i++) {
			cin >> nome >> x;
			num.pb(mk(x, nome));
		}
		sort(all(num), comp);
		printf("Instancia %d\n", h++);
		printf("%s\n\n", num[0].S.c_str());
	}
	return 0;
}