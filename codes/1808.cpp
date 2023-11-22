#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int ans[5005];

int main(int argc, char** argv) {
	int tam, sum, n;
	string x1;
	cin >> x1;
	tam = x1.size();
	sum = n = 0;
	for(int i = 0; i < tam; i++) {
		if(x1[i+1] != '0') {
			sum += x1[i] - '0';
			n++;
		}
		else {
			sum += 10;
			n++;
			i++;
		}
	}
	printf("%.2lf\n", (double)sum/n);
	return 0;
}