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

bool comp(const pair<int, string> & x1, const pair<int, string> & x2) {
	if(x1.S.size() != x2.S.size())
		return (x1.S.size() > x2.S.size());
	return (x1.F < x2.F);
}

int main(int argc, char * * argv) {
	int h = 1;
	string aux, op;
	set<string> sim, nao;
	set<string>::iterator it;
	vector<pair<int, string> > num;
	while(cin >> aux) {
		if(aux == "FIM") break;
		cin >> op;
		if(op == "YES") { 
			num.pb(mk(h++, aux));
			sim.insert(aux);
		}
		else
			nao.insert(aux);	
	}
	for(it = sim.begin(); it != sim.end(); it++)
		   printf("%s\n", (*it).c_str());
	for(it = nao.begin(); it != nao.end(); it++)
		   printf("%s\n", (*it).c_str());
	sort(all(num), comp);
	printf("\nAmigo do Habay:\n%s\n", num[0].S.c_str());
	return 0;
}
