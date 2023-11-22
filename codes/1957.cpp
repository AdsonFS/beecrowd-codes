#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
string s;       // global -> resposta

void hexa(int x) {
    int q = x / 16;     // quociente
    int r = x % 16;     // resto
    if(q != 0)          // ainda falta algo
        hexa(q);        // recursao 
    if(r < 10) s.push_back(r+'0');
    else if(r == 10) s.push_back('A');
    else if(r == 11) s.push_back('B');
    else if(r == 12) s.push_back('C');
    else if(r == 13) s.push_back('D');
    else if(r == 14) s.push_back('E');
    else if(r == 15) s.push_back('F');
    // fim da recurrsao
}

int main(int argc, char const ** argv) {
    int x;
    scanf("%d", &x);
    hexa(x);        // converter para hexadecimal
    // A resposta é do fim para o inicio
    for(int i = 0; i < s.size(); i++)
        printf("%c", s[i]);
    printf("\n");
	return 0;
}


