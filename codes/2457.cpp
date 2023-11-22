#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXV 52
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	char c[2], str[1010];
	cin >> c;
	while(cin >> str)
	{
		i++;
		if(strstr(str, c))
			j++;
	}
	printf("%.1lf\n", (100.0/i) * j);
	return 0;
}