#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef pair<int, int> ii;

struct deus
{
	string nome;
	int p, k, m;	
};

bool comp(const deus &d1, const deus &d2)
{
	if(d1.p != d2.p)
		return (d1.p > d2.p);
	if(d1.k != d2.k)
		return (d1.k > d2.k);
	if(d1.m != d2.m)
		return (d1.m < d2.m);
	return (d1.nome < d2.nome);
}

int main(int argc, char *argv[])
{
	int t;
	vector<deus> num;
	deus d;
	scanf("%d", &t);
	for(int j = 0; j < t; j++)
	{
		cin >> d.nome;
		scanf("%d%d%d", &d.p, &d.k, &d.m);
		num.pb(d);
	}
	sort(num.begin(), num.end(), comp);
	printf("%s\n", num[0].nome.c_str());
	return 0;
}
