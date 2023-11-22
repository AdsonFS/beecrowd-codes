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
	int n, l;
	char c;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int sum = 0;
		bool ok = false;
		scanf("%d", &l);
		vector<int> num, aux;
		for(int j = 0; j < l; j++)
		{
			cin >> c;
			num.pb((int)c);
			aux.pb((int)c);
		}
		sort(num.begin(), num.end());
		for(int j = 0; j < l; j++)
		{
			if(num[j] != aux[j])
				sum++;
			if(sum == 2)
				ok = true;
			else if(sum > 2)
			{
				ok = false;
				break;
			}
		}
		if(ok)
			printf("There are the chance.\n");
		else
			printf("There aren't the chance.\n");
	}
	
	return 0;
}
