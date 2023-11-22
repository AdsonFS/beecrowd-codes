#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const ** argv) {
    int p, j1, j2, r, a, J;
    cin >> p >> j1 >> j2 >> r >> a;
    int soma = j1+j2;

    J = 2;
    // Verificamos se p jpgador 1 ganha

    if(r == 1) { // jogador 1 roubou
        if(a == 0)  // se o j2 nao diz q ele roubou
            J = 1;  
    }
    else {          // jogador 1 nao roubou
        if(a == 1)  // se o j2 diz q ele roubou
            J = 1;
        else {   // ele não foi acusado
            if(soma%2 == 0 && p == 1)
                J = 1;
            else if(soma%2 == 1 && p == 0) 
                J = 1;
        }

    }
    cout << "Jogador " << J << " ganha!" << endl;
    return 0;
}


