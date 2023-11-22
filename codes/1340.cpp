#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
bool pilha, fila, pqb;

int main(int argc, char** argv) {
	int n, op, x;
	while(scanf("%d", &n) != EOF) {
		pilha = fila = pqb = true;
		stack<int> p;
		queue<int> q;
		priority_queue<int> pq;
		for(int i = 0; i < n; i++) {
			scanf("%d%d", &op, &x);
			if(op == 1) {
				p.push(x);
				q.push(x);
				pq.push(x);
			}
			else {
				if(pilha) {
					if(p.top() == x) p.pop();
					else pilha = false;
				}
				if(fila) {
					if(q.front() == x) q.pop();
					else fila = false;
				}
				if(pqb) {
					if(pq.top() == x) pq.pop();
					else pqb = false;
				}
			}
		}
		if(fila + pqb + pilha > 1) printf("not sure\n");
		else if(fila + pqb + pilha == 0) printf("impossible\n");
		else if(pilha) printf("stack\n");
		else if(fila) printf("queue\n");
		else if(pqb) printf("priority queue\n");
	}
	return 0; 
}
