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
	int v1, v2, res;
	char x1[10], x2[10], op;
	cin >> x1 >> op >> x2;
	int tam = strlen(x1);
	for(int i = 0; i < tam; i++)
		if(x1[i] == '7')
			x1[i] = '0';
	v1 = atoi(x1);
	tam = strlen(x2);
	for(int i = 0; i < tam; i++)
		if(x2[i] == '7')
			x2[i] = '0';
	v2 = atoi(x2);
	if(op == '+') res = v1 + v2;
	else if(op == '-') res =  v1 - v2;
	else if(op == 'x') res = v1 * v2;
	else if(op == '/') res = v1 / v2;
	sprintf(x1, "%d", res);
	tam = strlen(x1);
	for(int i = 0; i < tam; i++)
		if(x1[i] == '7')
			x1[i] = '0';
	v1 = atoi(x1);
	printf("%d\n", v1);
	return 0;
}
