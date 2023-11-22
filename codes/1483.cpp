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
int vet[] = {4, };

int main(int argc, char** argv) {
	double v;
	string x1, x2;
	while(cin >> v >> x1 >> x2) {
		if(v == 0 && x1 == "0" && x2 == "0") break;
		while(x1.size() < 4)
			x1 = "0" + x1;
		while(x2.size() < 4)
			x2 = "0" + x2;
		int sum = 0;
		for(int i = 1; i <= 4; i++) {
			if(x1[x1.size() - i] == x2[x2.size() - i])
				sum++;
			else
				break;
		}
		int v1 = ((x1[x1.size() - 2] - '0') * 10) + (x1[x1.size() - 1] - '0');
		int v2 = ((x2[x2.size() - 2] - '0') * 10) + (x2[x2.size() - 1] - '0');
		if(v1 == 0) v1 = 99;
		if(v2 == 0) v2 = 99;
		if(sum == 4) printf("%.2lf\n", v * 3000);
		else if(sum == 3) printf("%.2lf\n", v * 500);
		else if(sum == 2) printf("%.2lf\n", v * 50);
		else if(ceil(v1 / 4.0) == ceil(v2 / 4.0)) printf("%.2lf\n", v * 16);
		else printf("0.00\n");
	}	
	return 0;
}
