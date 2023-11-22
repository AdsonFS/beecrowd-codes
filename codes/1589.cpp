#include <bits/stdc++.h>
using namespace std;

// int soma(int r1, int r2) {      // funcao com retorno do tipo int
    // funcao com copia
    // return r1 + r2;
// }

void soma_por_referencia(int r1, int r2, int &R) {
    // & -> APONTA para R, ou seja, ele altera o valor de R na funcao main
    // & -> Endereco de R
    R = r1 + r2;
}

int main(int argc, char const ** argv) {
    int T, r1, r2, R = 0;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++) {
        scanf("%d%d", &r1, &r2);
        // R = r1 + r2;  Conta simples
        // R = soma(r1, r2);      // funcao com retorno
        soma_por_referencia(r1, r2, R);
        printf("%d\n", R);
    }
    return 0;
}

