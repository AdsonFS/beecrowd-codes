#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair

class pais
{	
public:
	int o, p, b;
	string nome;
	pais(string n)
	{
		o = 0;
		p = 0;
		b = 0;
		nome = n;
	}
};
vector<pais> num;
int i;

bool comp(const pais &p1, const pais &p2)
{
	if(p1.o != p2.o)
		return (p1.o > p2.o);
	if(p1.p != p2.p)
		return (p1.p > p2.p);
	if(p1.b != p2.b)
		return (p1.b > p2.b);
	return p1.nome < p2.nome;
	
}

bool existe(string nome)
{
	int tam = num.size();
	for(int j = 0; j < tam; j++)
	{
		if(num[j].nome == nome)
		{
			i = j;
			return true;
		}
	}
	return false;
}
	
int main(int argc, char *argv[])
{
	string nome;
	char jogo[100];
	while(!cin.getline(jogo, 100).eof())
	{
		getline(cin, nome);
		if(existe(nome))
			num[i].o++;
		else
		{
			pais p(nome);
			p.o++;
			num.pb(p);
		}
		
		getline(cin, nome);
		if(existe(nome))
			num[i].p++;
		else
		{
			pais p(nome);
			p.p++;
			num.pb(p);
		}
		
		getline(cin, nome);
		if(existe(nome))
			num[i].b++;
		else
		{
			pais p(nome);
			p.b++;
			num.pb(p);
		}
	}
	sort(num.begin(), num.end(), comp);
	int tam = num.size();
	printf("Quadro de Medalhas\n");
	for(int i = 0; i < tam; i++)
		printf("%s %d %d %d\n", num[i].nome.c_str(), num[i].o, num[i].p, num[i].b);
	
	return 0;
}
