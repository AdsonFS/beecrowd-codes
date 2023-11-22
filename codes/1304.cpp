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
#define S second
#define F first
#define MAX 60
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int getHour(int h, int m, int s) {
	return (h * 3600) + (m * 60) + s;;
}

void printar(int v) {
	if(v < 10) printf("0");
	printf("%d", v);
}

int main(int argc, char** argv) {
	cout << fixed << setprecision(2);
	double uh, nh, e;
	int h, m, s, v;
	char c;
	e = uh = nh = v = 0;
	while(scanf("%d:%d:%d%c", &h, &m, &s, &c) != EOF){
		nh = getHour(h, m, s);
		e += (double)(v * ((nh - uh) / 3600.0));
    	if(c == ' ')
        	scanf("%d", &v);
		else {
			printar(h); printf(":");
			printar(m); printf(":");
			printar(s); printf(" ");
			cout << e << " km\n";
		}
		uh = nh;
	}
	return 0;
}


