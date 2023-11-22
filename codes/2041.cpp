#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first
#define debug(x) cout<<#x << " = "<<x<<endl;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int n, tam, sum;
	string str[50];
	str[1] = '3';
	for(int i = 2; i < 41; i++) {
		sum = 1;
		tam = str[i-1].size();
		for(int j = 0; j < tam; j++) {
			if(str[i-1][j] == str[i-1][j+1])
				sum++;
			else {
				str[i] += sum + '0';
				str[i] += str[i-1][j];
				sum = 1;
			}
		}
	}
	while(scanf("%d", &n) != EOF)
		printf("%s\n", str[n].c_str());
	return 0;
}