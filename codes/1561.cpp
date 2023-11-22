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
	int x1, x2;
	char op;
	char min[6], hora[5];
	int H[] = {8, 4, 2, 1};
	int M[] = {32, 16, 8, 4, 2, 1};
	while(cin >> x1 >> op >> x2) {
		memset(min, ' ', sizeof(min));
		memset(hora, ' ', sizeof(hora));
		for(int i = 0; i < 4; i++) {
			if(x1 >= H[i]) {
				x1 -= H[i];
				hora[i] = 'o';
			}
		}
		for(int i = 0; i < 6; i++) {
			if(x2 >= M[i]) {
				x2 -= M[i];
				min[i] = 'o';
			}
		}
		printf(" ____________________________________________\n");
		printf("|                                            |\n");
		printf("|    ____________________________________    |_\n");
		printf("|   |                                    |   |_)\n");
		printf("|   |   8         4         2         1  |   |\n");
		printf("|   |                                    |   |\n");
		printf("|   |   %c         %c         %c         %c  |   |\n", hora[0], hora[1], hora[2], hora[3]);
		printf("|   |                                    |   |\n");
		printf("|   |                                    |   |\n");
		printf("|   |   %c     %c     %c     %c     %c     %c  |   |\n", min[0], min[1], min[2], min[3], min[4], min[5]);
		printf("|   |                                    |   |\n");
		printf("|   |   32    16    8     4     2     1  |   |_\n");
		printf("|   |____________________________________|   |_)\n");
		printf("|                                            |\n");
		printf("|____________________________________________|\n\n");
	}
	return 0;
}
