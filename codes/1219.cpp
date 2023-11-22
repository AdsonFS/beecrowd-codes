#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1000000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	double a, b, c;
	while(cin >> a >> b >> c) {
		double p = (a+b+c) / 2.0;
		double tria = sqrt(p*(p-a)*(p-b)*(p-c));
		double Aros = pow(tria/p,2)*(PI);
		double raio = (a*b*c*1.0) / sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));
		double Asun = (PI * raio * raio) - tria;
		printf("%.4lf %.4lf %.4lf\n", Asun, (tria - Aros), Aros);
	}	
	return 0;
}
