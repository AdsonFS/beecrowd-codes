#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	double best1, best2, best3, sum, x;
	int t, n, m;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d", &n, &m);
		while(m--) {
			sum = 0;
			best1 = best2 = best3 = -1;
			for(int i = 0; i < n; i++){
				scanf("%lf", &x);
				best1 = max(best1, x);
				if(x < 7) best2 = max(best2, x);
				if(x < 4) best3 = max(best3, x);
				sum += x;
			}
			sum = sum / n;
			if(sum >= 4 && sum < 7)
				sum = max(sum, best2);
			else if(sum >= 7)
				sum = max(sum, best1);
			printf("%.2lf\n", sum);
		}
	}
	return 0;
}
