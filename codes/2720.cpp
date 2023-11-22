#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef pair<int, int> ii;

struct presente
{
	int id;
	int tam;	
};

bool comp(const presente &p1, const presente &p2)
{
	if(p1.tam != p2.tam)
		return (p1.tam > p2.tam);
	return (p1.id < p2.id);
}

int main(int argc, char *argv[])
{
	int t, n, k;
	int x1, x2, x3;
	scanf("%d", &t);
	for(int j = 0; j < t; j++)
	{
		vector<presente> num;
		vector<int> aux;
		presente p1;
		scanf("%d%d", &n, &k);
		for(int i = 0; i < n; i++)
		{
			scanf("%d%d%d%d", &p1.id, &x1, &x2, &x3);
			p1.tam = (x1 * x2 * x3);
			num.pb(p1);
		}
		sort(num.begin(), num.end(), comp);
		for(int i = 0; i < k; i++)
			aux.pb(num[i].id);
		sort(aux.begin(), aux.end());
		printf("%d", aux[0]);
		for(int i = 1; i < k; i++)
			printf(" %d", aux[i]);
		printf("\n");
	}
	
	return 0;
}
