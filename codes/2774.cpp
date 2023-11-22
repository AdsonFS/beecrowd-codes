#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXN 500010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	int h, x;
	double x1;
	
	while(scanf("%d%d", &h, &x) != EOF)
	{
		int n = (h*60) / x;
		double media = 0;
		double sum = 0;
		vector<double> num;
		for(int i = 0; i < n; i++)
		{
			scanf("%lf", &x1);
			media += x1;
			num.pb(x1);
		}
		media = media / n;
		
		for(int i = 0; i < n; i++)
			sum += pow(num[i] - media, 2);
		
		sum = sum / (n-1);
		sum = sqrt(sum);
		printf("%.5lf\n", sum);
	}
	
	return 0;
}
