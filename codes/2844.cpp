#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = int (a); i < int (b); i++)
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 900000
#define pi 3.1415
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char *argv[])
{
	int x1, x2, x3;
	int v1, v2, v3;
	string s1, str;
	cin >> x1 >> x2 >> x3 >> v1 >> v2 >> v3;
	while(cin >> s1)
		str += s1 + "j";
	
	int tam = str.size() - 1;
//	cout << tam << endl;
	int t1 = (x3 * tam) + x1 + x2 + x1;
	int t2 = (v3 * tam) + v1 + v2 + v1;
//	cout << t1 << endl << t2 << endl;
	if(t1 < t2)
		cout << "Matheus\n";
	else if(t1 > t2)
		cout << "Vinicius\n";
	else
		cout << "Empate\n";
	
	return 0;
}

