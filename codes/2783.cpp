#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int ca[110], co[310];
	int n, c, m;
	int cont = 0;
	scanf("%d%d%d", &n, &c, &m);
	
	for(int i = 0; i < c; i++)
		scanf("%d", &ca[i]);
	for(int i = 0; i < m; i++)
		scanf("%d", &co[i]);
	
	
	for(int i = 0; i < c; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(ca[i] == co[j])
			{
				cont++;
				break;
			}
		}
	}
	
	printf("%d\n", c-cont);
	return 0;
}