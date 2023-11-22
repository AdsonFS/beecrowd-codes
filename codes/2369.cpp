#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1000002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int n;
	int m = 11;
	int sum = 7;
	scanf("%d", &n);
	while(m <= n){
		if(m > 10 && m <= 30)
			sum++;
		else if(m > 30 && m <= 100)
			sum += 2;
		else
			sum += 5;
		m++;
	}
	
	printf("%d\n", sum);
	return 0;
}
