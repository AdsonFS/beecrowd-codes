#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int l, a, p, r, d1, d2;
	scanf("%d%d%d%d", &l, &a, &p, &r);
	d1 = sqrt(pow(l, 2) + pow(a, 2));
	d2 = sqrt(pow(d1, 2) + pow(p, 2));

	if (d2 <= (2 * r))
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
