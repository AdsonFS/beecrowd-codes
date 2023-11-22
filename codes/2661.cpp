#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 1000100
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
vector<ull> num;
bool primo[MAX];
bool ok[MAX];

void divisor(ull n) {
	for(ull div = 2; div*div <= n; div++) {
		if(!(n % div)) {
			num.pb(div);
			ull k = n / div;
			if(k != div)  num.pb(k);
		}
	}
	num.pb(n);
	sort(all(num));
}

bool solve(ull N) {
	int aux = 0;
	int now = 0;
	while (N % 2 == 0) {
		N /= 2;
		aux++;
		now++;
		if(now > 1) return false;
	}
	for(ull i = 3; i <= N; i += 2) {
		if(!primo[i]) {
			now = 0;
			while (N % i == 0) {
				N /= i;
				aux++;
				now++;
				if(now > 1) return false;
			}
			if(i*i > N) break;
			if(ok[i]) continue;
			for(ull j = i*i; j < MAX; j += i)
				primo[j] = true;
			ok[i] = true;
		}
	}
	if (N > 1) aux++;
	return aux >= 2 ? true : false;
}

int main(int argc, char * * argv) {
	ull n;
	cin >> n;
	divisor(n);
	int ans = 0;
	int tam = num.size();
	rep(i, 0, tam)  if(solve(num[i])) ans++;
	printf("%d\n", ans);
	
	return 0;
}
