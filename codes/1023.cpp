#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef pair<int, int> ii;
int l;

bool comp(const ii &x1, const ii &x2)
{
	return (x1.S < x2.S);
}

int main(int argc, char *argv[])
{
	int n, x1, x2;
	int j = 1;
	bool primeiro = true;
	while(scanf("%d", &n) && n != 0)
	{
		if(!primeiro)
			printf("\n\n");
		primeiro = false;
		vector<ii> num;
		double media = 0;
		int pessoas = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d%d", &x1, &x2);
			num.pb(mk(x1, (int)x2/x1));
			media += x2;
			pessoas += x1;
		}
		media = (double) 1.0 * media / pessoas;
		sort(num.begin(), num.end(), comp);
		int tam = num.size();
		printf("Cidade# %d:\n", j++);
		int f = num[0].F;
		bool ok = true;
		for(int i = 0; i < tam; i++)
		{
			if(num[i].S == num[i+1].S)
				f += num[i+1].F;
			else
			{
				if(ok)
					printf("%d-%d", f, num[i].S);
				else
					printf(" %d-%d", f, num[i].S);
				f = num[i+1].F;
				ok = false;
			}
		}
		ostringstream strs;
		strs << media * 1.00001;
		string str = strs.str();
		printf("\nConsumo medio: ");
		tam = str.size();
		for(int i = 0; i < tam; i++)
		{
			if(str[i] == '.')
			{
				printf("%c%c%c", str[i], str[i+1], str[i+2]);
				break;
			}
			else
				printf("%c", str[i]);
		}
		printf(" m3.");
	}
	
	return 0;
}
