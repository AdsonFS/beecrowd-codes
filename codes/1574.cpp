#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int num(char c[])
{
	int tam = strlen(c);
	int x = 0;
	int h = 1;
	for(int i = tam - 1; i > tam - (tam - 7); i--)
	{
		x += (c[i] - '0') * h;
		h = h * 10;
	}
	return x;
}
int main(int argc, char *argv[])
{
	int n, m;
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		cin >> m;
		vector<string> str;
		char comando[15];
		int pos = 0;
		cin.ignore();
		for(int j = 0; j < m; j++)
		{
			cin.getline(comando, 15);
			if(strcmp(comando, "LEFT") == 0)
			{
				pos--;
				str.push_back(comando);
			}
			else if(strcmp(comando, "RIGHT") == 0)
			{
				pos++;
				str.push_back(comando);
			}
			else
			{
				int x = num(comando);
				if(str[x-1] == "LEFT")
				{
					str.push_back("LEFT");
					pos--;
				}
				else
				{
					str.push_back("RIGHT");
					pos++;
				}
			}
		}
		cout << pos << endl;
	}
	
	return 0;
}
