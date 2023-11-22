#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 100
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<char, char> cc;
typedef pair<int, cc> pcc;
typedef unsigned long long int ull;
int intervalo[] = {15, 30, 45, 60, 75};
int x, vet[5];

void setar(int v) {
	if(v <= 15) vet[0]++;
	else if(v <= 30) vet[1]++;
	else if(v <= 45) vet[2]++;
	else if(v <= 60) vet[3]++;
	else vet[4]++;
}

int get(int v) {
	if(v <= 15) v = 0;
	else if(v <= 30) v = 1;
	else if(v <= 45) v = 2;
	else if(v <= 60) v = 3;
	else v = 4;
	return v;
}

int main(int argc, char** argv) {
	while(scanf("%d", &x) != EOF) {
		memset(vet, 0, sizeof(vet));
		setar(x);
		bool ok1 = true;
		bool ok2 = true;
		if(get(x) != 0) ok1 = false;
		REP(i, 1, 24) {
			if(i == 12) i = 13;
			scanf("%d", &x);
			setar(x);
			if(get(x) != (i % 5)) ok1 = false;
		}
		rep(i, 0, 5) if(!(vet[i] == 5 || (vet[i] == 4 && i == 2))) ok2 = false;
		if(ok1) printf("OK\n");
		else if(ok2) printf("RECICLAVEL\n");
		else printf("DESCARTAVEL\n");
	}
	return 0;
}

