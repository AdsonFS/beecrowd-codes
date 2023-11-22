#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int n;
	string x1, x2;
	scanf("%d", &n);
	while(n--) {
		cin >> x1 >> x2;
		if(x1 == x2) printf("%s\n", x1.c_str());
		else printf("1\n");
	}
	return 0;
}
