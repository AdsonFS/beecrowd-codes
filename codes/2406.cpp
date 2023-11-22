#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	// {', '[', '(',         '}', ']' e ')
	int n;
	string x1;
	scanf("%d", &n);
	while(n--) {
		cin >> x1;
		bool ok = true;
		int tam = x1.size();
		stack<char> pilha;
		for(int i = 0; i < tam; i++) {
			if(x1[i] == ')') {
				if(pilha.empty()) ok = false;
				else if(pilha.top() == '(')
					pilha.pop();
				else
					ok = false;
			}
			else if(x1[i] == ']') {
				if(pilha.empty()) ok = false;
				else if(pilha.top() == '[')
					pilha.pop();
				else
					ok = false;
			}
			else if(x1[i] == '}') {
				if(pilha.empty()) ok = false;
				else if(pilha.top() == '{')
					pilha.pop();
				else
					ok = false;
			}
			else
				pilha.push(x1[i]);
			if(!ok) break;
		}
		if(pilha.size() != 0) ok = false;
		if(ok) printf("S\n");
		else printf("N\n");
	}
	return 0;
}