#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 125000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	string x1;
	int ini;
	while(cin >> x1) {
		bool ok = false;
		ini = x1.find('-');
		if(tolower(x1[0]) == 'c' || tolower(x1[ini - 1]) == 'c') {
			x1[ini] = ' ';
			if(tolower(x1[ini + 1]) == 'o' || tolower(x1[x1.find('-') - 1]) == 'o') {
				ini = x1.find('-');
				x1[ini] = ' ';
				if(tolower(x1[ini + 1]) == 'b' || tolower(x1[x1.find('-') - 1]) == 'b') {
					ini = x1.find('-');
					x1[ini] = ' ';
					if(tolower(x1[ini + 1]) == 'o' || tolower(x1[x1.find('-') - 1]) == 'o') {
						ini = x1.find('-');
						x1[ini] = ' ';
						if(tolower(x1[ini + 1]) == 'l' || tolower(x1[x1.size() - 1]) == 'l') {
							ok = true;
						}
					}
				}
			}
		}
		if(ok) printf("GRACE HOPPER\n");
		else printf("BUG\n");
	}
	return 0;
}
