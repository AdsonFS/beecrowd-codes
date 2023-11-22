#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define minN 500010
#define str second
#define F first
typedef long long ll;
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	vector<int> num;
	int sum = 0;
	int x;
	for(int i = 0; i < 6; i++)
	{
		scanf("%d", &x);
		num.pb(x);
	}
	for(int i = 0; i < 6; i++)
	{
		scanf("%d", &x);
		if(find(num.begin(), num.end(), x) != num.end())
			sum++;
	}
	if(sum < 3)
		printf("azar\n");
	else if(sum == 3)
		printf("terno\n");
	else if(sum == 4)
		printf("quadra\n");
	else if(sum == 5)
		printf("quina\n");
	else
		printf("sena\n");
	
	return 0;
}
