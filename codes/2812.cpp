#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 5010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char ** argv) {
	int t, n, x;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		vector<int> num;
		for(int i = 0; i < n; i++) {
			scanf("%d", &x);
			if(x % 2 != 0)
				num.pb(x);
		}
		sort(all(num), greater<int>());
		int tam = num.size();
		int i = 0, j = tam - 1;
		while(j > i) {
			if(i == 0)
				printf("%d", num[i++]);
			else
				printf(" %d", num[i++]);
			if(j > i)
				printf(" %d", num[j--]);
			if(j == i)
				printf(" %d", num[i]);
		}
		if(tam == 1)
			printf("%d", num[0]);
		
	//	if(tam > 0)
			printf("\n");
	}
	return 0;
}
