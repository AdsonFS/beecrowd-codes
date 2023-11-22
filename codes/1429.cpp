#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 501
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int pd[10];

int fat(int n) {
	if(n == 1)
		return pd[1] = 1;
	if(pd[n] != 0)
		return pd[n];
	return pd[n] = n * fat(n - 1);
}


int main(int argc, char ** argv) {
	string x1;
	int z = fat(6);
	while(cin >> x1) {
		if(x1 == "0") break;
		int tam = x1.size();
		int res = 0;
		for(int i = 0, j = tam; i < tam; i++, j--)
			res += (x1[i] - '0') * pd[j];
		printf("%d\n", res);
	}
	
	return 0;
}
