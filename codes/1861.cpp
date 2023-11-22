#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	string x1, x2;
	map<string, int> mapa;
	map<string, int>::iterator it;
	while(cin >> x1 >> x2) {
		mapa[x1]++;
		mapa[x2] = -INF;
	}
	printf("HALL OF MURDERERS\n");
	for(it = mapa.begin(); it != mapa.end(); it++)
		if(it->S > 0)
			printf("%s %d\n", it->F.c_str(), it->S);
	return 0;
}
