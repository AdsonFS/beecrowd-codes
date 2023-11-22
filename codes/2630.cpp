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
int h;

int main(int argc, char ** argv) {
	string str;
	int t, x1, x2, x3;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++) {
		cin >> str >> x1 >> x2 >> x3;
		if(str == "eye")
			printf("Caso #%d: %d\n", ++h, (int)((0.3 * x1) + (0.59 * x2) + (0.11 * x3)));
		else if(str == "mean")
			printf("Caso #%d: %d\n", ++h, (int)((x1 + x2 + x3) / 3));
		else if(str == "max")
			printf("Caso #%d: %d\n", ++h, max(x1, max(x2, x3)));
		else
			printf("Caso #%d: %d\n", ++h, min(x1, min(x2, x3)));
	}
	return 0;
}
