#include <bits/stdc++.h>
const int MAX = 1e6+6;
int N, K, ans, a[MAX];

int main() {
    int p = 1;
    scanf("%d%d", &N, &K);
    if(N%2 == 1) p++;
    for(int i = 1; i <= N; i++) {
        scanf("%d", a+p);
        if(p%2 == 0) ans ^= ((a[p]-a[p-1]) % (K+1));
        p++;
    }
    printf("%s\n", ans ? "Dali" : "Dila");
    return 0;
}
