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
	int vet[6];
	bool ok1 = true, ok2 = true;
	scanf("%d", vet);
	for(int i = 1; i < 5; i++)
	{
		scanf("%d", vet + i);
		if(!(vet[i] > vet[i - 1]))
			ok1 = false;
		if(!(vet[i] < vet[i - 1]))
			ok2 = false;
	}
	if(ok1)
		printf("C\n");
	else if(ok2)
		printf("D\n");
	else
		printf("N\n");
	
	return 0;
}