#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10002
#define S second
#define F first
#define xxx cout << "aqui\n"

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
string uni[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
string dez[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
string cen[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

int main(int argc, char * * argv) {
	char num[8];
	cin >> num;
	int tam = strlen(num);
	if(tam == 4)
		printf("M");
	else {
		int x = atoi(num);
		if(x >= 100)
			printf("%s%s%s", cen[(num[0] - '0')].c_str(), dez[(num[1] - '0')].c_str(), uni[(num[2] - '0')].c_str());
		else if(x >= 10)
			printf("%s%s", dez[(num[0] - '0')].c_str(), uni[(num[1] - '0')].c_str());
		else
			printf("%s", uni[(num[0] - '0')].c_str());
	}
	printf("\n");
	return 0;
}
