#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000009
#define pb push_back
#define mk make_pair
#define MAX 10000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * argv[]) {
	cout << fixed << setprecision(6);
	int x1;
	float x2;
	char x3;
	char x4[60];
	cin >> x1 >> x2 >> x3;
	cin.ignore();
	cin.getline(x4, 60);
	cout << x1 << x2 << x3 << x4 << "\n";
	cout << x1 << "\t" << x2 << "\t" << x3 << "\t" << x4 << "\n";
	cout << setw(10) << x1 << setw(10) << x2 << setw(10) << x3 << setw(10) << x4 << "\n";
	return 0;
}

