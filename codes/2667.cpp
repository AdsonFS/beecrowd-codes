#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 52

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[])
{
	string str;
	cin >> str;
	int tam = str.size();
	int sum = 0;
	for(int i = 0; i < tam; i++)
		sum += (str[i] - '0');
	printf("%d\n", sum%3);
	return 0;
}
