#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

struct carne {
	string nome;
	int d;
};

bool comp(const carne &c1, const carne &c2) {
	return (c1.d < c2.d);
}

int main(int argc, char ** argv) {
	int n;
	carne c;
	string str;
	while(scanf("%d", &n) != EOF) {
		vector<carne> num;
		for(int i = 0; i < n; i++) {
			cin >> c.nome >> c.d;
			num.pb(c);
		}
		sort(all(num), comp);
		printf("%s", num[0].nome.c_str());
		for(int i = 1; i < n; i++)
			printf(" %s", num[i].nome.c_str());
		printf("\n");
	}
	return 0;
}

