#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first
#define debug(x) cout<<#x << " = "<<x<<endl;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	string x1, x2;
	cin >> x1 >> x2;
	for(int i = 0; i < x2.size(); i++)
		printf("%c", x1[x2[i] - 97]);
	printf("\n");
	return 0;
}