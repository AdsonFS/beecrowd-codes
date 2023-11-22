#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first
#define rep(i,a,b) for(int i = int (a); i < int (b); i++)

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int mp[10010];

void solve(int k)
{
	int t = 1;

	for(int i = 1; i < 10010; i++)
	{
		if(mp[i] != 0 )
		{
			t += mp[i];
			if(i == k)
				break;
			mp[i] = 0;

		}

		else if(t <= i)
		{
			t++;
		}
	}

	cout << t << endl;

}

int main(int argc, char *argv[])
{
	int a, b, c, ma = 0;

	while(cin >> a)
	{
		memset(mp, 0 , sizeof mp);
		ma = 0;
		rep(i, 0, a)
		{
			cin >> b >> c;
			if(mp[b] != 0)
				mp[b] += c;
			else
				mp[b] = c;
			if(b > ma)
				ma = b;

		}
		solve(ma);

	}

	return 0;
}