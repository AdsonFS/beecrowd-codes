#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 52

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
string res[] = {"do", "do#", "re", "re#", "mi", "fa", "fa#", "sol", "sol#", "la", "la#", "si"};
int vet[] = {-12 ,-10 ,-8 ,-7, -5, -3, -1, 0, 2, 4, 5, 7, 9, 11, 12};

int main(int argc, char *argv[])
{
	set<int> num;
	set<int>::iterator it;
	int n, x;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		num.insert((x - 1) % 12);
	}
	bool ok = true;

	for(int i = 0; i < 12; i++)
	{
		int cont = 0;
		int tam = num.size();
		for(it = num.begin(); it != num.end(); it++)
		{
			for(int j = 0; j < 15; j++)
			{
				if(*it == vet[j] + i)
				{
					cont++;
					break;
				}
			}
		}
		if(cont == tam)
		{
			printf("%s\n", res[i].c_str());
			ok = false;
			break;
		}
	}
	if(ok)
		printf("desafinado\n");
	return 0;
}
