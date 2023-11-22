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
	string nome;
	int n, m, x, h = 0;
	scanf("%d%d", &n, &m);
	set<string> nomes[1001];
	set<string>:: iterator it;
	priority_queue<pair<int, string> >pq;
	for(int i = 0; i < n; i++) {
		cin >> nome >> x;
		pq.push(mk(x, nome));
	}
	while(!pq.empty()) {
		nomes[h++].insert(pq.top().S);
		pq.pop();
		h = h % m;
	}
	for(int i = 0; i < m; i++) {
		printf("Time %d\n", i+1);
		for(it = nomes[i].begin(); it != nomes[i].end(); it++)
			printf("%s\n", (*it).c_str());
		printf("\n");
	}	
	return 0;
}
