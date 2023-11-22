#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	string str;
	set<string> num;
	while(getline(cin, str))
	{
		int tam = str.size();
		string aux;
		char c;
		for(int i = 0; i < tam; i++)
		{
			c = str[i];
			if(isalpha(c) != 0)
			{
				aux += tolower(c);
			}
			else if(c == '.' || c == ' ')
			{
				if(aux.size() > 0)
					num.insert(aux);
				aux.clear();
			}
			else
			{
				int kl = aux.size();
				if(kl > 0)
					num.insert(aux);
				aux.clear();
			}
		}
		tam = aux.size();
		if(tam > 0)
			num.insert(aux);
	}
	set<string>::iterator it;
	for(it = num.begin(); it != num.end(); it++)
		cout << *it << "\n";
	
	return 0;
}
