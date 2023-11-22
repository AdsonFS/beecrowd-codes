#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    char aux;
    bool ok;
    set<char> str, sd1;
    str.insert('J');sd1.insert('j');str.insert('B');sd1.insert('b');
    str.insert('V');sd1.insert('v');str.insert('Z');sd1.insert('z');
    str.insert('S');sd1.insert('s');str.insert('P');sd1.insert('p');
    str.insert('X');sd1.insert('x');
    while((aux = getchar()) != EOF)
    {
        if(str.count(aux) != 0) aux = 'F';
        else if(sd1.count(aux) != 0)aux = 'f';

        if(!((aux == 'f' or aux == 'F') and ok))cout << aux;
        if(aux == 'f' or aux == 'F')ok = true;
        else ok = false;
    }
    return 0;
}