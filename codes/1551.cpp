#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	char vet[1010];
	char c;
	scanf("%d", &n);
	getchar();
	for(int k = 0; k < n; k++)
	{
		set<char> st;
		cin.getline(vet, 1010);
		int tam = strlen(vet);
		for(int i = 0; i < tam; i++)
		{
			if(isalpha(vet[i]) != 0)
			{
				c = tolower(vet[i]);
				st.insert(c);
			}
		}
		tam = st.size();
		if(tam == 26)
			printf("frase completa\n");
		else if(tam >= 13)
			printf("frase quase completa\n");
		else
			printf("frase mal elaborada\n");
	}
	
	return 0;
}