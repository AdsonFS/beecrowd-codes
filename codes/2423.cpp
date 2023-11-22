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
	int x1, x2, x3, x;
	priority_queue< int, vector<int>, greater<int> > pq;
	scanf("%d%d%d", &x1, &x2, &x3);
	x = x1 / 2;
	pq.push(x);
	x = x2 / 3;
	pq.push(x);
	x = x3 / 5;
	pq.push(x);
	printf("%d\n", pq.top());
	return 0;
}