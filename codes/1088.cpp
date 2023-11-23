#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back

int merge_sort(vector<int> &v)
{
	int tam = v.size();
	int inv = 0;
	
	if(tam == 1)
		return 0;
	
	vector<int> v1, v2;
	for(int i = 0; i < tam/2; i++)
		v1.pb(v[i]);
	for(int i = tam/2; i < tam; i++)
		v2.pb(v[i]);
	
	inv += merge_sort(v1);
	inv += merge_sort(v2);
	
	v1.pb(INF);
	v2.pb(INF);
	
	int i1 = 0, i2 = 0;
	for(int i = 0; i < tam; i++)
	{
		if(v1[i1] < v2[i2])
			v[i] = v1[i1++];
		else
		{
			v[i] = v2[i2++];
			inv += v1.size() - i1 - 1;
		}
	}
	return inv;
}

int main(int argc, char *argv[])
{
	int n, x;
	while(scanf("%d", &n) && n != 0)
	{
		vector<int> num;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			num.pb(x);
		}
		int inv = merge_sort(num);
		if(inv % 2 != 0)
			printf("Marcelo\n");
		else
			printf("Carlos\n");
	}
	
	return 0;
}
