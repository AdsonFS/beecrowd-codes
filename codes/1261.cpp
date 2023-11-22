#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 52

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[])
{
	map<string, int> dic;
	int n, m, v, sum;
	string str, aux;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		cin >> str >> v;
		dic[str] = v;
	}
	
		getchar();
	for(int i = 0; i < m; i++)
	{
		sum = 0;
		str.clear();
		aux.clear();
		aux = "000";
		while(aux != ".")
		{
			getline(cin, aux);
			str += aux + " ";
		}
		int tam = str.size() - 1;
		aux.clear();
		for(int j = 0; j < tam; j++)
		{
			if(str[j] != ' ')
			{
				aux += str[j];
			}
			else
			{
				sum += dic[aux];
				aux.clear();
			}
		}
		if(aux.size() > 0)
			sum += dic[aux];
		
		printf("%d\n", sum);
	}
	return 0;
}
