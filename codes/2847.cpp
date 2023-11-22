#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = int (a); i < int (b); i++)
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 900000
#define pi 3.1415
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[])
{
	string aux = "Iloveyou!";
	string str, s1;
	map<char, int> mapa;
	char c;
	while(cin >> s1)
		str += s1;
	
	int tam = str.size();
	for(int i = 0; i < tam; i++)
	{
		c = str[i];
		if(isalpha(c) != 0 || c == '!')
			mapa[c]++;
	}
	tam = aux.size();
	int sum = INF;
	mapa['o'] = mapa['o'] / 2;
	for(int i = 0; i < tam; i++)
	{
		if(mapa[aux[i]] != mapa.empty())
			sum = min(sum, mapa[aux[i]]);
		else
		{
			sum = 0;
			break;
		}
	}
	printf("%d\n", sum);
	return 0;
}




