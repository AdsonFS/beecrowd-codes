#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
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
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	bool ok;
	int sum = 0;
	string x1, x2;
	cin >> x1 >> x2;
	int t1 = x1.size();
	int t2 = x2.size();
	int tam = t1 - t2 + 1;
	for(int i = 0; i < tam; i++) {
		ok = true;
		for(int j = 0; j < t2; j++) {
			if(x2[j] == x1[j + i]) {
				ok = false;
				break;
			}
		}
		if(ok) sum++;
	}
	printf("%d\n", sum);
	return 0;
}

