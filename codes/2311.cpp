#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	int n;
	double peso, x;
	string ent;
	vector<string> nomes;
	vector<double> nota_final;
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		cin >> ent;
		cin >> peso;
		vector<double> notas;
		for(int i = 0; i < 7; i++)
		{
			cin >> x;
			notas.push_back(x);
		}
		sort(notas.begin(), notas.end());
		notas.pop_back();
		notas.erase(notas.begin());
		double soma = 0;
		for(int i = 0; i < 5; i++)
			soma += notas[i];
		nota_final.push_back(soma*peso);
		nomes.push_back(ent);
	}
	for(int k = 0; k < n; k++)
		cout << nomes[k] << " " << nota_final[k] << endl;
	
	return 0;
}
