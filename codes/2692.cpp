#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[])
{
	map<char, char> mapa;
	int n, m;
	char x1, x2;
	char vet[MAX];
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		cin >> x1 >> x2;
		mapa[x1] = x2;
		mapa[x2] = x1;
	}
//	cin.ignore();
	for(int i = 0; i < m; i++)
	{
		scanf (" %[^\n]", vet);
		int tam = strlen(vet);
		for(int j = 0; j < tam; j++)
		{
			char c = vet[j];
			if(mapa[c] == mapa.empty())
				printf("%c", c);
			else
				printf("%c", mapa[c]);
		}
		printf("\n");
	}
	
	
	return 0;
}
