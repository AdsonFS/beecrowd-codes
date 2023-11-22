#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 1000002

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;


int main(int argc, char ** argv) {
	int x1, x2, x3;
	bool feliz = false;
	scanf("%d%d%d", &x1, &x2, &x3);
	if(x1 > x2 && x3 >= x2)
		feliz = true;
	else if(x2 > x1 && x3 > x2 && abs(x3-x2) >= abs(x2 - x1))
		feliz = true;
	else if(x1 > x2 && x2 > x3 && abs(x2 - x1) > abs(x3 - x2))
		feliz = true;
	else if(x1 == x2 && x3 > x2)
		feliz = true;
	if(feliz)
		printf(":)\n");
	else
		printf(":(\n");
	return 0;
}
