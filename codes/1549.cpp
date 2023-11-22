#include <stdio.h>
#include <stdlib.h>

double pi= 3.14159265359;

double acha(double n, double m, double a, double r)
{

    if(pi*a*(m*m+m*n+n*n)/3 - r > 0.0005)
    {
        return acha(n,(m+n)/2,a/2,r);
    }
    else if(pi*a*(m*m+m*n+n*n)/3 - r < -0.0005)
    {
        r-=pi*a*(m*m+m*n+n*n)/3;
        m+=m-n;
        n=(m+n)/2;
        return acha(n,m,a,r)+a;
    }
    else
        return a;
}

int main()
{
    int N, pessoas, mililitros;
    int be, Be, He;
    double razao, h, H, b, B;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
	{
        scanf("%d%d%d%d%d", &pessoas, &mililitros, &be, &Be, &He);
        b=1.0*be;
        B=1.0*Be;
        H=1.0*He;

        razao = 1.0*mililitros/pessoas;
        h = acha(b,B,H,razao);
        printf("%.2lf\n", h);
    }

    return 0;
}