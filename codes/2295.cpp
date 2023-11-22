#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 22

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;


int main(int argc, char** argv)
{
	double x1, x2, x3, x4;
	scanf("%lf%lf%lf%lf", &x1, &x2, &x3, &x4);
	if((x3/x1) > (x4/x2))
		printf("A\n");
	else
		printf("G\n");
	
	return 0;
}