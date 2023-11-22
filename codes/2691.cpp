#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const ** argv) {
    int N, x, y;
    scanf("%d", &N);        // N -> quantidade de casos de teste
    for(int j = N; j > 0; j--) {
        scanf("%dx%d", &x, &y);
        if(x == y) {
            // unica diferenca é q ele só mostra uma tabuada
            for(int i = 5; i <= 10; i++)
                printf("%d x %d = %d\n", x, i, x*i);
        }
        else {
            // for pq eu sei o limite da repeticao
            for(int i = 5; i <= 10; i++)
                printf("%d x %d = %d && %d x %d = %d\n", x, i, x*i, y, i, y*i);
        }
    }
    return 0;
}

