#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char ** argv) {
	char curso[10];
	int N, n, x, EPR, EHD;
	while(scanf("%d", &n) != EOF) {
		N = n;
		EPR = EHD = 0;
		while(n--) {
			scanf("%d %s", &x, curso);
			if(strcmp(curso, "EPR") == 0) EPR++;
			else if(strcmp(curso, "EHD") == 0) EHD++;
		}
		printf("EPR: %d\nEHD: %d\nINTRUSOS: %d\n", EPR, EHD, N - (EPR + EHD));
	}
	return 0;
}
