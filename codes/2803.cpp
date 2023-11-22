#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 5010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
string aux[] = {"roraima", "acre", "amapa", "amazonas", "para", "rondonia", "tocantins"};

int main(int argc, char * * argv) {
	string str;
	getline(cin, str);
	bool ok = false;
	for(int i = 0; i < 7; i++) {
		if(str == aux[i]) {
			printf("Regiao Norte\n");
			ok = true;
			break;
		}
	}
	if(!ok)
		printf("Outra regiao\n");
	return 0;
}
