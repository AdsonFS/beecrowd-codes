#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000100
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	double x;
	char res[200000];
	cin >> x;
	sprintf(res, "%.4E", x);
	if(res[0] != '-') printf("+");
	int tam = strlen(res);
	for(int i = 0; i < tam; i++)
		printf("%c", res[i]);
	printf("\n");
	return 0;
}

