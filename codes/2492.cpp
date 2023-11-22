#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 1000
typedef long long ll;
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	int n;
	while(scanf("%d", &n) && n != 0)
	{
		int s = 0;		
		string x, op, y;
		map<string, string> mp;
		set<string> st;
		for(int i = 0; i < n; i++)
		{
			cin >> x >> op >> y;
			if(mp[x] == "")
				mp[x] = y;
			else
				s = 2;
			st.insert(mp[x]);
		}
		if(s == 0)
		{
			int tam = st.size();
			if(tam != n)
				s = 1;
		}
		
		if(s == 0)
			printf("Invertible.\n");
		else if(s == 1)
			printf("Not invertible.\n");
		else
			printf("Not a function.\n");
	}
	
	return 0;
}
