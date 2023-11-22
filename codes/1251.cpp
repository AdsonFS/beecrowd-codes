#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef pair<int, int> ii;
vector<ii> num;
int j;
bool existe(char c)
{
	int tam = num.size();
	for(int i = 0; i < tam; i++)
	{
		if(num[i].F == (int)c)
		{
			j = i;
			return true;
		}
	}
	return false;
}

bool comp(const ii &x1, const ii &x2)
{
	if(x1.S != x2.S)
		return (x1.S < x2.S);
	return (x1.F > x2.F);
}

int main(int argc, char *argv[])
{
	char vet[1010];
	bool pri = true;
	while(!cin.getline(vet, 1010).eof())
	{
		int tam = strlen(vet);
		for(int i = 0; i < tam; i++)
		{
			if(existe(vet[i]))
				num[j].S++;
			else
				num.pb(mk((int)vet[i], 1));
		}
		sort(num.begin(), num.end(), comp);
		tam = num.size();
		if(!pri)
			printf("\n");
		pri = false;
		for(int i = 0; i < tam; i++)
			printf("%d %d\n", num[i].F, num[i].S);
		num.clear();
	}
	
	return 0;
}
