#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int ans[5005];

int main(int argc, char** argv) {
	char aux[10];
	int x1, x2, tam;
	for(int i = 1; i < 5001; i++) {
		sprintf(aux, "%d", i);
		set<char> num;
		tam = strlen(aux);
		for(int j = 0; j < tam; j++)
			num.insert(aux[j]);
		ans[i] = ans[i-1];
		if(num.size() == tam) ans[i]++;
	}
	while(scanf("%d%d", &x1, &x2) != EOF)
		printf("%d\n", ans[x2] - ans[x1-1]);
	return 0;
}