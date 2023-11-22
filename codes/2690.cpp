#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	char c, vet[50];
	int n;
	cin >> n;
	cin.ignore();
	while(n--) {
		scanf(" %[^\n]", vet);
		int tam = strlen(vet);
		int cont = 0;
		for(int i = 0; i < tam; i++) {
			c = vet[i];
			if(c == 'G' || c == 'Q' || c == 'a' || c == 'k' || c == 'u') cout << "0";
			else if(c == 'I' || c == 'S' || c == 'b' || c == 'l' || c == 'v') cout << "1";
			else if(c == 'E' || c == 'O' || c == 'Y' || c == 'c' || c == 'm' || c == 'w') cout << "2";
			else if(c == 'F' || c == 'P' || c == 'Z' || c == 'd' || c == 'n' || c == 'x') cout << "3";
			else if(c == 'J' || c == 'T' || c == 'e' || c == 'o' || c == 'y') cout << "4";
			else if(c == 'D' || c == 'N' || c == 'X' || c == 'f' || c == 'p' || c == 'z') cout << "5";
			else if(c == 'A' || c == 'K' || c == 'U' || c == 'g' || c == 'q') cout << "6";
			else if(c == 'C' || c == 'M' || c == 'W' || c == 'h' || c == 'r') cout << "7";
			else if(c == 'B' || c == 'L' || c == 'V' || c == 'i' || c == 's') cout << "8";
			else if(c == 'H' || c == 'R' || c == 'j' || c == 't') cout << "9";
			if(c != ' ') cont++;
			if(cont == 12)
				break;
		}
		printf("\n");
	}
	return 0;
}
