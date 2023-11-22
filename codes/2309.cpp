#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1001
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
string valor = "4 5 6 7 12 11 13 1 2 3";
int n, a, b, A, B;

void calc(string &a1, string &b1) {
	if(a1 == "1") a1 = " 1 ";
	else if(a1 == "2") a1 = " 2 ";
	else if(a1 == "3") a1 = " 3";
	if(b1 == "1") b1 = " 1 ";
	else if(b1 == "2") b1 = " 2 ";
	else if(b1 == "3") b1 = " 3";
	if(valor.find(a1) >= valor.find(b1)) a++;
	else b++;
}

int main(int argc, char * * argv) {
	string a1, a2, a3, b1, b2, b3;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
		a = b = 0;
		calc(a1, b1); calc(a2, b2); calc(a3, b3);
		if(a > b) A++;
		else B++;
	}
	printf("%d %d\n", A, B);
	return 0;
}
