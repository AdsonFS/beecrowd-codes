#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

class Palavra
{
public:
	string txt;
	int tam;
	Palavra(string t)
	{
		txt = t;
		tam = t.size();
	}
};

bool comp(const Palavra &s1, const Palavra &s2)
{
	if(s1.tam == s2.tam)
		return true;
	return s1.tam < s2.tam;
}

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	cin.ignore();
	for(int k = 0; k < n; k++)
	{
		vector<Palavra> str;
		int cont = 0;
		char vet[1001], aux[1001];
		cin.getline(vet, 1001);
		for(int i = 0; i < strlen(vet); i++)
		{
			if(vet[i] != ' ')
				aux[cont++] = vet[i];
			else
			{
				aux[cont] = '\0';
				Palavra pp(aux);
				str.push_back(pp);
				cont = 0;
			}
			if(i == strlen(vet) - 1)
			{
				aux[cont] = '\0';
				Palavra pp(aux);
		   		str.push_back(pp);
			}
		}
		
		stable_sort(str.begin(), str.end(), comp);
		
		for(int j = str.size() - 1; j > 0; j--)
			cout << str[j].txt << " ";
		cout << str[0].txt << endl;
	}
	
	return 0;
}
