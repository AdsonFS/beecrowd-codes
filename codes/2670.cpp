#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define minN 500010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	int menor = INF;
	int atual = 0;
	
	atual = (x2*2) + (x3*4);
	menor = min(menor, atual);
	
	atual = (x1*2) + (x3*2);
	menor = min(menor, atual);
	
	atual = (x1*4) + (x2*2);
	menor = min(menor, atual);
	
	printf("%d\n", menor);
	return 0;
}