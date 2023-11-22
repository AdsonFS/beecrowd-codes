#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define minN 500010
#define str second
#define F first
typedef long long ll;
typedef pair<int, int> ii;


int main(int argc, char *argv[])
{
	string str;
	getline(cin, str);
	int tam = str.size();
	bool ok = true;
	for(int i = 1; i < tam; i++)
	{
		if(str[i] == ' ')
		{
			ok = false;
			printf("%c", str[i]);
		}
		else if(ok)
		{
			printf("%c", str[i]);
			ok = false;
		}
		else
			ok = true;
	}
	printf("\n");
	return 0;
}
