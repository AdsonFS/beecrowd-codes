#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int best = 0;
    int n;
    double cont = 0;
    double d, c;
    cin >> n;
    for (int i = 0; i < n; i++){
        scanf("%lf%lf", &d, &c);
        if(pow(d,c / 200.0) > cont){
            cont = pow(d,c / 200.0);
            best = i;
        }
    }
    printf("%d\n", best);
    return 0;
}
