#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define MAX 1000000000000000001
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
vector<long double> num;

unsigned long long int fat(int n, int k) {
//	cout << n << endl;
	if(n - k >= 1)
		return n * fat(n - k, k);
	return n;
}

int main(int argc, char** argv)
{
	cout << fixed << setprecision(0);
	unsigned long long int x, k;
	int n;
	char op[23];
	scanf("%d", &n);
	while(n--) {
		cin >> op;
		int tam = strlen(op);
		for(int i = 1; i < tam; i++) {
			if(op[i] == '!') {
				k = tam - i;
				break;
			}
		}
	//	cout << k << endl;
		x = atoi(op);
		x = fat(x, k);
		cout << x << "\n";
	}
	return 0;
}
