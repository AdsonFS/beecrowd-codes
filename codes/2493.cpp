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
#define MAX 60
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

struct conta {
	int x, y, z;
};

conta vet[MAX];

int main(int argc, char** argv) {
	char l;
	int t, x, ans;
	char nome[MAX];
	while(scanf("%d", &t) != EOF) {
		set<string> list;
		set<string> :: iterator it;
		REP(i, 1, t)
			scanf("%d%d %c %d", &vet[i].x, &vet[i].y, &l, &vet[i].z);
		rep(i, 0, t) {
			scanf(" %s %d %c", nome, &x, &l);
			int r = vet[x].z;
			int mais = vet[x].x + vet[x].y;
			int menos = vet[x].x - vet[x].y;
			int vezes = vet[x].x * vet[x].y;
			if(l == '+') ans = mais;
			else if(l == '-') ans = menos;
			else if(l == '*') ans = vezes;
			else if(mais != r && menos != r && vezes != r) ans = r;
			if(ans != r) list.insert(nome);
		}
		int tam = list.size();
		if(tam == t) printf("None Shall Pass!\n");
		else if(!tam) printf("You Shall All Pass!\n");
		else {
			it = list.begin();
			printf("%s", (*it++).c_str());
			for(; it != list.end(); it++)
				printf(" %s", (*it).c_str());
			printf("\n");
		}
	}
	return 0;
}
