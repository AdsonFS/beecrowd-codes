#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long int ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long ull;
string str[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
				"-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
				"..-", "...-", ".--", "-..-", "-.--", "--.." };

int main(int argc, char** argv) {
	string s;
	cin >> s;
	while(cin >> s) {
		int tam = s.size()+1;
		s += "...AAAAAAAAA";
		string ans, aux;
		int cnt = 0;
		rep(i, 0, tam) {
			if(s[i] == '=') cnt++;
			else {
				if(i && s[i-1] == '.') continue;
				if(cnt == 1) aux.pb('.');
				if(cnt == 3) aux.pb('-');
				cnt = 0;
				rep(j, i, i+7) { if(s[j] == '.') cnt++; else break; }
				if(cnt > 1) {
					rep(j, 0, 26)
						if(aux == str[j]) { ans.pb((char)(j+'a')); break; }
					aux.clear();
					if(cnt == 7) ans.pb(' ');
				}
				cnt = 0;
			}
		}
		printf("%s\n", ans.c_str());
	}
	return 0;
}
