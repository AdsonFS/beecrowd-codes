#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef pair<int, int> ii;

bool comp(const ii &p1, const ii &p2)
{
	if(p1.S != p2.S)
		return (p1.S > p2.S);
	return (p1.F < p2.F);
}

int main(int argc, char *argv[])
{
	string ref = "abcdefghijklmnopqrstuvwxyz";

	int n;
	char vet[210];
	char c;
	scanf("%d", &n);
	getchar();
	for(int k = 0; k < n; k++)
	{
		map<char, int> num;
		vector<ii> x1;
		cin.getline(vet, 210);
		int tam = strlen(vet);
		for(int i = 0; i < tam; i++)
		{
			if(isalpha(vet[i]) != 0)
			{
				c = tolower(vet[i]);
				num[c]++;
			}
		}
		for(int i = 0; i < 26; i++)
		{
			x1.pb(mk(i, num[ref[i]]));
		}
		sort(x1.begin(), x1.end(), comp);
		
		char aux = ref[x1[0].F];
		printf("%c", aux);
		for(int i = 1; i < 26; i++)
		{
			c = ref[x1[i].F];
			if(x1[i].S == x1[i-1].S)
				printf("%c", c);
			else
				break;
		}
		printf("\n");
	}
	
	return 0;
}