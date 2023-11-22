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
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
vector<int> num;

int CeilIndex(std::vector<int>& v, int l, int r, int key) { 
    while (r - l > 1) { 
        int m = l + (r - l) / 2; 
        if (v[m] >= key) r = m; 
        else l = m; 
    } 
    return r; 
} 
  
int LIS() { 
    if (!num.size()) return 0; 
    vector<int> tail(num.size(), 0); 
    int length = 1;
    tail[0] = num[0]; 
    for (size_t i = 1; i < num.size(); i++) { 
        if (num[i] < tail[0]) 
            tail[0] = num[i];  
        else if (num[i] > tail[length - 1]) 
            tail[length++] = num[i]; 
        else
            tail[CeilIndex(tail, -1, length - 1, num[i])] = num[i]; 
    }
    return length; 
} 

int main(int argc, char** argv) {
	int n, x;
	while(scanf("%d", &n) != EOF) {
		num.clear();
		rep(i, 0, n) {
			scanf("%d", &x);
			num.pb(x);
		}
		printf("%d\n", LIS());	
	}
	return 0;
}