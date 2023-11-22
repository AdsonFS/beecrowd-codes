#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100001
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
bool primo[MAX];

void crivo(int n) {
	for(int i = 3; i <= n; i += 2) {
		if(!primo[i]) {
			for(int j = i * i; j < MAX; j += i)
				primo[j] = true;
		}
	}
	
}

int main(int argc, char ** argv) {
	crivo(sqrt(MAX));
	int n, i = 0;
	scanf("%d", &n);
	int m = n;
	if(m % 2 == 0)
		m++;
	int sum = 0;
	int t = 59996400;
	while(i < 10) {
		if(!primo[m]) {
			i++;
			sum += m;
		}
		m += 2;
	}
	int x = (int)(1.0 * t) / sum;
	int y = (int) x / 24.0;
	printf("%d km/h\n", sum);
	printf("%d h / %d d\n", x, y);
	return 0;
}