#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 52

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[])
{
	int d, h, m, s, d1, h1, m1, s1, d2, h2, m2, s2;
	string xx;
	cin >> xx >> d1 >> h1 >> xx >> m1 >> xx >> s1;
	cin >> xx >> d2 >> h2 >> xx >> m2 >> xx >> s2;
	int tempo1 = (d1 * 24 * 3600) + (h1 * 3600) + (m1 * 60) + s1;
	int tempo2 = (d2 * 24 * 3600) + (h2 * 3600) + (m2 * 60) + s2;
	int tempo = tempo2 - tempo1;
	d = tempo / (24 * 3600);
	tempo = tempo - (d * 24 * 3600);
	h = tempo / (3600);
	tempo = tempo - (h * 3600);
	m = tempo / (60);
	tempo = tempo - (m * 60);
	s = tempo;
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
	return 0;
}
