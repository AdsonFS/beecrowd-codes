#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
double a, b;

int main(int argc, char** argv) {
	scanf("%lf%lf", &a, &b);
	if(a > 0 && b > 0) puts("Q1");
	else if(a < 0 && b > 0) puts("Q2");
	else if(a < 0 && b < 0) puts("Q3");
	else if(a > 0 && b < 0) puts("Q4");
	else if(!a  && b) puts("Eixo Y");
	else if(a  && !b) puts("Eixo X");
	else puts("Origem");
	return 0;
}
