#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100001
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char ** argv) {
	string x1, str = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	while(getline(cin, x1)) {
		int tam = x1.size();
		for(int i = 0; i < tam; i++) {
			if(x1[i] == ' ')
				printf(" ");
			else
				printf("%c", str[str.find(x1[i]) - 1]);
		}
		printf("\n");
	}
	return 0;
}