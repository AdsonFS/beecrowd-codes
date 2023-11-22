#include <bits/stdc++.h>
using namespace std;

struct Time
{
	int v, e, g, ti, to;
};

bool ok;

bool comp(const Time &t1, const Time &t2)
{
	if(t1.to != t2.to)
		return (t1.to < t2.to);
	if(t1.g != t2.g)
		return (t1.g < t2.g);
	ok = true;
	return false;
}

int main(int argc, char *argv[])
{
	vector<Time> num;
	Time t;
	for(int i = 0; i < 2; i++)
	{
		scanf("%d%d%d", &t.v, &t.e, &t.g);
		t.ti = i;
		t.v = t.v * 3;
		t.to = t.v + t.e;
		num.push_back(t);
	}
	sort(num.begin(), num.end(), comp);
	
	if(ok)
		printf("=\n");
	else if(num[1].ti == 0)
		printf("C\n");
	else
		printf("F\n");
	
	return 0;
}