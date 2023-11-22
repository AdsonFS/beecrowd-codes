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
int dy[] = {-2, -2, 2, 2, 1, 1, -1, -1};
int dx[] = {-1, 1, -1, 1, -2, 2, -2, 2};
bool tab[10][10];

int main(int argc, char * * argv) {
	int x, y, v, h = 0;
	char c;
	while(cin >> y && y != 0) {
		cin >> c;
		// cout << y << c << endl;
		x = c - 96;
		int sum = 0;
		for(int i = 0; i < 8; i++) {
			cin >> v >> c;
			tab[v-1][(c-96)-1] = true;
			tab[v-1][(c-96)+1] = true;
		}
		
		for(int k = 0; k < 8; k++) {
			if(!tab[y + dy[k]][x + dx[k]])
				if(y + dy[k] > 0 && y + dy[k] < 9 && x + dx[k] > 0 && x + dx[k] < 9)
					sum++;
		}
		for(int i = 0; i < 10; i++)
			for(int j = 0; j < 10; j++)
				tab[i][j] = false;
		printf("Caso de Teste #%d: %d movimento(s).\n", ++h, sum);
	}
	
	return 0;
}
