#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;


int main(int argc, char * * argv) {
	char x1[MAX], x2[MAX];
	while(cin >> x1 >> x2) {
		if(strcmp(x1, "0") == 0 && strcmp(x2, "0") == 0)
			break;
		int h = 10, v1, v2;
		while(h >= 10) {
			h = 0;
			int tam = strlen(x1);
			for(int i = 0; i < tam; i++)
				h += (x1[i] - '0');
			sprintf(x1, "%d", h);
		}
		v1 = h;
		h = 10;
		while(h >= 10) {
			h = 0;
			int tam = strlen(x2);
			for(int i = 0; i < tam; i++)
				h += (x2[i] - '0');
			sprintf(x2, "%d", h);
		}
		v2 = h;
		if(v1 > v2)
			printf("1\n");
		else if(v1 < v2)
			printf("2\n");
		else
			printf("0\n");
	}
	return 0;
}
