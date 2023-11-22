#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 100010
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	char vet[20];
	while(scanf(" %s", vet) != EOF) {
		string str = vet;
		bool um[10];
		for(int i = 0; i <= 8; i++)
			um[i] = false;
		while(str.size() < 9)
			str = "0" + str;
		// cout << str[0] << endl;
		for(int i = 0; i  <= 8; i++) {		// line 1
			if(str[i] >= '5') printf("0");
			else printf("1");
		}
		printf("\n");
		for(int i = 0; i  <= 8; i++) {		// line 2
			if(str[i] >= '5') {
				printf("1");
				str[i] = ((str[i] - '0') - 5) + '0';
			}
			else printf("0");
		}
		printf("\n");
		for(int i = 0; i  <= 8; i++)		// line 3
			printf("-");
		printf("\n");
		for(int i = 0; i  <= 8; i++) {		// line 4 -> 1
			if(str[i] == '0') {
				printf("0");
				um[i] = true;
			}
			else printf("1");
		}
		printf("\n");
		for(int i = 0; i  <= 8; i++) {		// line 5
			if(um[i] || (str[i] >= '2')) printf("1");
			else {
				printf("0");
				um[i] = true;
			}
		}
		printf("\n");
		for(int i = 0; i  <= 8; i++) {		// line 6
			if(um[i] || (str[i] >= '3')) printf("1");
			else {
				printf("0");
				um[i] = true;
			}
		}
		printf("\n");
		for(int i = 0; i  <= 8; i++) {		// line 7
			if(um[i] || (str[i] >= '4')) printf("1");
			else {
				printf("0");
				um[i] = true;
			}
		}
		printf("\n");
		for(int i = 0; i  <= 8; i++) {		// line 8
			if(str[i] == '4') printf("0");
			else printf("1");
		
		}
		printf("\n\n");
	}
	return 0;
}
