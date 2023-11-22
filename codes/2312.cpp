#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Pais
{
public:
	int o, b, p;
	string nome;
	Pais(string n, int x1, int x2, int x3)
	{
		nome = n;
		o = x1;
		b = x2;
		p = x3;
	}
};

bool comp(const Pais &p1, const Pais &p2)
{
	if(p1.o != p2.o)
		return (p1.o > p2.o);
	if(p1.b != p2.b)
		return (p1.b > p2.b);
	if(p1.p != p2.p)
		return (p1.p > p2.p);
	else
		return (p1.nome < p2.nome);
}

int main(int argc, char *argv[])
{
	int n, x1, x2, x3;
	string nome;
	vector<Pais> num;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> nome >> x1 >> x2 >> x3;
		Pais p(nome, x1, x2, x3);
		num.push_back(p);
	}
	sort(num.begin(), num.end(), comp);
	for(int i = 0; i < n; i++)
	{
		cout << num[i].nome << " " << num[i].o << " " << num[i].b << " " << num[i].p << endl;
	}
	
	return 0;
}