#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;

int main(int argc, char** argv) {
	char c;
	while(scanf("%c", &c) != EOF) {
		if(c >= 'a' && c <= 'z') {
			if(c + 13 > 'z') cout << (char)(c - 13);
			else cout << (char)(c + 13);
		}
		else if(c >= 'A' && c <= 'Z') {
			if(c + 13 > 'Z') cout << (char)(c - 13);
			else cout << (char)(c + 13);
		}
		else
			cout << c;
	}
	return 0;
}

