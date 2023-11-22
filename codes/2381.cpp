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

int main(int argc, char * * argv) {
	int n, k;
	string nome;
	vector<string> num;
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++) {
		cin >> nome;
		num.pb(nome);
	}
	sort(all(num));
	printf("%s\n", num[k - 1].c_str());
	return 0;
}
