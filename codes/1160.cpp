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
double x[MAX], y[MAX];

int main(int argc, char** argv) {
	int n, pa, pb;
	double ga, gb;
	scanf("%d", &n);
	for(int k = 0; k < n; k++) {
		int t = 0;
		scanf("%d%d%lf%lf", &pa, &pb, &ga, &gb);
		while (pa<=pb) {
            pa = pa + ((pa*ga)/100.0);
            pb = pb + ((pb*gb)/100.0);
            t++;
            if(t > 101) break;
        }
        if (t>100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", t);
	}
	return 0;
}

