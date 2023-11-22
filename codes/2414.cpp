#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	priority_queue<int> num;
	int x;
	while(scanf("%d", &x) && x != 0)
		num.push(x);
	printf("%d\n", num.top());
	return 0;
}