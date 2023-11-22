#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 22

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv)
{
	int h = 1;
	int n, x1, x2;
	string s1, s2;
	while(scanf("%d", &n) && n != 0)
	{
		cin >> s1 >> s2;
		for(int i = 0; i < n; i++)
		{
			scanf("%d%d", &x1, &x2);
			if(i == 0)
				printf("Teste %d\n", h++);
			if((x1+x2)%2 == 0)
				printf("%s\n", s1.c_str());
			else
				printf("%s\n", s2.c_str());
		}
		printf("\n");
	}
	
	return 0;
}
