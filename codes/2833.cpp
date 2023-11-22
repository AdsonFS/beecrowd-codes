#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	string str[] = {"oitavas", "quartas", "semifinal", "final"};
	int x1, x2, x, p = -1;
	for(int i = 1; i <= 16; i++) {
		scanf("%d", &x);
		if(x == 1) x1 = i + 15;
		if(x == 9) x2 = i + 15;
	}
	while(x1 != x2) {
		x1 = x1 / 2;
		x2 = x2 / 2;
		p++;
	}
	printf("%s\n", str[p].c_str());
	return 0;
}
