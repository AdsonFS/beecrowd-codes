#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX];
int n, x;

int merge(vector<int> &v) {
	int tam = v.size();
	int m = tam / 2;
	if(tam <= 1) return 0;
	vector<int> v1, v2;
	int inv = 0;
	rep(i, 0, m) v1.pb(v[i]);
	rep(i, m, tam) v2.pb(v[i]);
	inv += merge(v1);
	inv += merge(v2);
	int in1 = 0, in2 = 0;
	v1.pb(INF); v2.pb(INF);
	rep(i, 0, tam) {
		if(v1[in1] < v2[in2]) {
			v[i] = v1[in1++];
		}
		else {
			v[i] = v2[in2++];
			inv += (m + 1) - in1 - 1;
		}
	}
	return inv;
}

int main(int argc, char** argv) {
	vector<int> num;
	scanf("%d", &n);
	REP(i, 1, n) {
		scanf("%d", &x);
		num.pb(x);
	}	
	printf("%d\n", merge(num));
	return 0;
}
