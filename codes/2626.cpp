#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long int ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long ull;

bool te(string s) { return (s == "tesoura"); }
bool pe(string s) { return (s == "pedra"); }
bool pa(string s) { return (s == "papel"); }

int main(int argc, char** argv) {
	string s1, s2, s3;
	while(cin >> s1 >> s2 >> s3) {
		if(pe(s1) && te(s2) && te(s3)) puts("Os atributos dos monstros vao ser inteligencia, sabedoria...");
		else if(pa(s1) && pe(s2) && pe(s3)) puts("Os atributos dos monstros vao ser inteligencia, sabedoria...");
		else if(te(s1) && pa(s2) && pa(s3)) puts("Os atributos dos monstros vao ser inteligencia, sabedoria...");
		
		else if(pe(s2) && te(s1) && te(s3)) puts("Iron Maiden's gonna get you, no matter how far!");
		else if(pa(s2) && pe(s1) && pe(s3)) puts("Iron Maiden's gonna get you, no matter how far!");
		else if(te(s2) && pa(s1) && pa(s3)) puts("Iron Maiden's gonna get you, no matter how far!");
		
		else if(pe(s3) && te(s1) && te(s2)) puts("Urano perdeu algo muito precioso...");
		else if(pa(s3) && pe(s1) && pe(s2)) puts("Urano perdeu algo muito precioso...");
		else if(te(s3) && pa(s1) && pa(s2)) puts("Urano perdeu algo muito precioso...");
		
		else puts("Putz vei, o Leo ta demorando muito pra jogar...");
	}
	return 0;
}
