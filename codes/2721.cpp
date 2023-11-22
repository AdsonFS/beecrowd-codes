#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXN 500010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	string vet[] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
	int sum = 0;
	int x;
	for(int i = 0; i < 9; i++)
	{
		scanf("%d", &x);
		sum += x;
	}
	sum -= 1;
	sum = (sum % 9);
	cout << vet[sum] << endl;
	return 0;
}