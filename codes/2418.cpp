#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main(int argc, char *argv[])
{
	vector<double> num;
	double x, media = 0;
	for(int i = 0; i < 5; i++)
	{
		scanf("%lf", &x);
		num.pb(x);
	}
	sort(num.begin(), num.end());
	for(int i = 1; i < 4; i++)
		media += num[i];
	printf("%.1lf\n", media);
	return 0;
}