#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
char c, s[1000];
int N, mp[30];

int main(int argc, char** argv) {
	map<char, int> mp;
	scanf("%d", &N);
	rep(i, 0, N) {
		scanf("%s %c", s, &c);
		mp[c-'A']++;
	}
	printf("%d Hobbit(s)\n", 	mp['X'-'A']);
	printf("%d Humano(s)\n", 	mp['H'-'A']);
	printf("%d Elfo(s)\n", 		mp['E'-'A']);
	printf("%d Anao(s)\n",		mp['A'-'A']);
	printf("%d Mago(s)\n", 		mp['M'-'A']);
	return 0;
}