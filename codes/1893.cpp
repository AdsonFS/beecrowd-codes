#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define MAX 1000000000000000001
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int x1, x2;
	cin >> x1 >> x2;
	if(x2 <= 2)
		cout << "nova\n";
	else if(x2 <= 96 && x2 > x1)
		cout << "crescente\n";
	else if(x2 >= 97)
		cout << "cheia\n";
	else
		cout << "minguante\n";
	return 0;
}
