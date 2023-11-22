#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char ** argv) {
	int n;
	string str;
	scanf("%d", &n);
	while(n--) {
		cin >> str;
		if(str[0] == str[2])
			printf("%d\n", (str[0] - '0') * (str[2] - '0'));
		else if(str[1] >= 'A' && str[1] <= 'Z')
			printf("%d\n", (str[2] - '0') - (str[0] - '0'));
		else
			printf("%d\n", (str[0] - '0') + (str[2] - '0'));
	}
	return 0;
}
