#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n;
	string ss;
	while(scanf("%d", &n) != EOF) {
		vector<string> str;
		for(int i = 0; i < n; i++) {
			cin >> ss;
			str.pb(ss);
		}
		sort(all(str));
		int sum = 0;
		int tam = str[0].size();
		for(int j = 1; j < n; j++) {
			for(int i = 0; i < tam; i++) {
				if(str[j][i] == str[j-1][i])
					sum++;
				else
					break;
			}
		}
		printf("%d\n", sum);
	}
	return 0; 
}

