#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 105

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int V[MAX][MAX];

int main(int argc, char * * argv) {
	int n, h = 0;
	string str;
	while(cin >> str) {
		n = 0;
		int onze = 0;
		if(h++) printf("\n");
		int tam = str.size();
		for(int i = 0; i < tam; i++) {
			int aux = (str[i] - '0');
			n += aux;
			if(tam % 2 == 0 && i % 2 == 0)
				onze += aux;
			else if(tam % 2 == 0 )
				onze -= aux;
			else if(tam % 2 != 0 && i % 2 != 0)
				onze += aux;
			else
				onze -= aux;
			
		}
		bool ok = false;
		int x = ((str[tam - 2] - '0') * 10) + (str[tam - 1] - '0');
		int y = ((str[tam - 4] - '0') * 1000) + ((str[tam - 3] - '0') * 100) + ((str[tam - 2] - '0') * 10) + (str[tam - 1] - '0');
		
		if(x % 4 == 0 && (x % 100 != 0 || y % 400 == 0)) {
			printf("This is leap year.\n");
			if(x % 5 == 0 && n % 3 == 0)
				printf("This is huluculu festival year.\n");
			if(x % 5 == 0 && onze % 11 == 0)
				printf("This is bulukulu festival year.\n");
			ok = true;
		}

		if(x % 5 == 0 && n % 3 == 0 && !ok) {
			printf("This is huluculu festival year.\n");
			ok = true;
		}
		if(!ok)
			printf("This is an ordinary year.\n");
	}
	return 0;
}
