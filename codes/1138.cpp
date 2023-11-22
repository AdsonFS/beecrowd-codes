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


void solve (int a, int b)
{
	int d[10];
	int c = log10(b - a);

	bool res = false;

	rep(i, 0, 10)
	d[i] = 0;

	for (int n = a; n <= b; n++)
	{
		bool v = false;
		int e = pow(10, c);

		for (int p = c; p > 0; p--, e /= 10)
		{
			if (n >= e && b - n >= e && n % e == 0)
			{
				if (p == c)
					res = true;
				else if (res == true)
					c = p;
				for (int i = 0; i < 10; i++)
					d[i] += p * e / 10;
				int k = n / e;
				while (k > 0)
				{
					d[k % 10] += e;
					k /= 10;
				}
				n += e - 1;
				v = true;
				break;
			}
		}
		if (v == true)
			continue;
		int k = n;
		while (k > 0)
		{
			d[k % 10]++;
			k /= 10;
		}
	}
	for (int i = 0; i <= 9; i++)
	{

		cout << d[i];
		if(i != 9)
			cout << " ";
	}

	cout << endl;
}

int main ()
{
	int a, b;
	cin >> a >> b;
	while (a != 0 && b != 0)
	{
		solve(a, b);
		cin >> a >> b;
	}
	return 0;
}
