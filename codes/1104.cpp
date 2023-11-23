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
	int x1, x2, x;
	while(scanf("%d%d", &x1, &x2) && (x1+x2) != 0)
	{
		set<int> s1, s2, ss;
		for(int i = 0; i < x1; i++)
		{
			scanf("%d", &x);
			s1.insert(x);
			ss.insert(x);
		}
		for(int i = 0; i < x2; i++)
		{
			scanf("%d", &x);
			s2.insert(x);
			ss.insert(x);
		}
		int m = max(s1.size(), s2.size());
		m = ss.size() - m;
		printf("%d\n", m);
	}
	
	return 0;
}
