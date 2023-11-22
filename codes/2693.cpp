#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

struct pessoa {
	string nome;
	char r;
	int d;
};

bool comp(const pessoa &p1, const pessoa &p2) {
	if(p1.d != p2.d)
		return (p1.d < p2.d);
	if(p1.r != p2.r)
		return (p1.r < p2.r);
	return (p1.nome < p2.nome);
}

int main(int argc, char ** argv) {
	int n;
	pessoa pp;
	while(scanf("%d", &n) != EOF) {
		vector<pessoa> num;
		for(int i = 0; i < n; i++) {
			cin >> pp.nome >> pp.r >> pp.d;
			num.pb(pp);
		}
		sort(all(num), comp);
		for(int i = 0; i < n; i++)
			printf("%s\n", num[i].nome.c_str());
	}
	return 0;
}
