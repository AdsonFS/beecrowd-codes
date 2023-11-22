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
	int a, b, c, h, l;
	scanf("%d%d%d%d%d", &a, &b, &c, &h, &l);
	int menor = min(h, l);
	int maior = max(h, l);
	vector<int> num;
	num.pb(a);
	num.pb(b);
	num.pb(c);
	sort(all(num));
	if(num[0] <= menor && num[1] <= maior)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}