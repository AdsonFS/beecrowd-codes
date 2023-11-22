#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

#define MAX 200000
typedef long long int ll;
int n;
ll bit[MAX];
ll A[MAX];

void update(int i, ll val)
{
	for(; i <= n; i += i&-i)
	{
		bit[i] += val;
	}
}

ll query(int i)
{
	ll sum = 0;
	for(; i > 0; i -= i&-i)
	{
		sum += bit[i];
	}
	return sum;
}

int main(int argc, char *argv[])
{
	cin >> n;
	int x;
	char vet1;
	int vet2;
	vector<int> num;
	num.push_back(0);
	for(int i = 1; i <= n; i++)
	{
		cin >> x;
		num.push_back(x);
		update(i, x);
	}
	
	while(cin >> vet1 >> vet2)
	{
		if(vet1 == 'a')
		{
			update(vet2, 0 - num[vet2]);
		}
		else
		{
			cout << query(vet2-1) << endl;
		}
	}
	
	return 0;
}
