#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first

struct roupa
{
	string cor;
	string nome;
	char op;
};

string aux = "PMG";

bool comp(const roupa &r1, const roupa &r2)
{
	if(r1.cor != r2.cor)
		return (r1.cor < r2.cor);
	if(r1.op != r2.op)
		return (aux.find(r1.op) < aux.find(r2.op));
	return (r1.nome < r2.nome);
}
#define c cout << "OK\n"
int main(int argc, char *argv[])
{
	int n;
	bool pri = true;
	while(scanf("%d", &n) && n != 0)
	{
		vector<roupa> num;
		string nome, cor;
		char op;
		for(int i = 0; i < n; i++)
		{
			cin.ignore();
			
			getline(cin, nome);
			cin >> cor >> op;
			roupa r;
			r.nome = nome;
			r.cor = cor;
			r.op = op;
			num.pb(r);
		}
		sort(num.begin(), num.end(), comp);
		if(!pri)
			printf("\n");
		printf("%s %c %s\n", num[0].cor.c_str(), num[0].op, num[0].nome.c_str());
		for(int i = 1; i < n; i++)
			printf("%s %c %s\n", num[i].cor.c_str(), num[i].op, num[i].nome.c_str());
		pri = false;
	}
	
	return 0;
}
