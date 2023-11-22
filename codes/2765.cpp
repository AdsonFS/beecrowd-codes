#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 1000002

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	string str;
	bool pri = true;
	getline(cin, str);
	int tam = str.size();
	for(int i = 0; i < tam; i++) {
		if(str[i] == ',' && pri) {
			pri = false;
			printf("\n");
		}
		else
			printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
