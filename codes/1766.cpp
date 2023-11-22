#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef pair<int, int> ii;

struct rena
{
	string nome;
	int p, i;
	double a;
};

bool comp(const rena &x1, const rena &x2)
{
	if(x1.p != x2.p)
		return (x1.p > x2.p);
	if(x1.i != x2.i)
		return (x1.i < x2.i);
	if(x1.a != x2.a)
		return (x1.a < x2.a);
	return (x1.nome < x2.nome);
}

int main(int argc, char *argv[])
{
	int t, n, m;
	int cont = 1;
	scanf("%d", &t);
	for(int j = 0; j < t; j++)
	{
		vector<rena> num;
		rena r;
		string nome;
		scanf("%d%d", &n, &m);
		for(int i = 0; i < n; i++)
		{
			cin >> r.nome;
			scanf("%d%d%lf", &r.p, &r.i, &r.a);
			num.pb(r);
		}
		sort(num.begin(), num.end(), comp);
		printf("CENARIO {%d}\n", cont++);
		for(int i = 0; i < m; i++)
			printf("%d - %s\n", i + 1, num[i].nome.c_str());
	}
	
	return 0;
}