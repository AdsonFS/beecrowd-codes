#include <bits/stdc++.h>
using namespace std;

struct ponto
{
	int x, y;
};

int main(int argc, char *argv[])
{
	ponto p;
	scanf("%d%d", &p.x, &p.y);
	if((p.x < 0 || p.x > 432) || (p.y < 0 || p.y > 468))
		printf("fora\n");
	else
		printf("dentro\n");
	
	return 0;
}