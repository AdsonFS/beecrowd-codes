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
typedef pair<int, ii> pii;
const int MAX = 1e5+5;
char s[MAX];
int N, D;

int main(int argc, char** argv) {
	while(scanf("%d%d", &N, &D) && N+D) {
		D = N - D;
		string str;
		stack<int> p;
		p.push(10);
		scanf(" %s", s);
		rep(i, 0, N) {
			int v = s[i]-'0';
			int r = (N-i)-2;
			while(p.size()+r >= D && v > p.top()) p.pop();
			if(p.size()-1 < D) p.push(v);
		}
		while(p.size() > 1) str.pb(p.top()+'0'), p.pop();
		reverse(all(str));
		printf("%s\n", str.c_str());
	}
	return 0;
}
