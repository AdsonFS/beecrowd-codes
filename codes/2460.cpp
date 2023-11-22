#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define minN 500010
#define str second
#define F first
typedef long long ll;
typedef pair<int, int> ii;


int main(int argc, char *argv[])
{
	vector<int> num;
	int n, x;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		num.pb(x);
	}
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		num.erase(find(num.begin(), num.end(), x));
	}
	int tam = num.size();
	printf("%d", num[0]);
	for(int i = 1; i < tam; i++)
		printf(" %d", num[i]);
	printf("\n");
	return 0;
}
