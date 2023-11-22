#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	double a, b, c, x1, x2, x3;
    cin >> a >> b >> c;    
	
	if(a > b && b > c) {x1 = a; x2 = b; x3 = c;}
	if(a > b && b < c && a > c) {x1 = a; x2 = c; x3 = b;}
	
	if(b > a && a > c) {x1 = b; x2 = a; x3 = c;}
	if(b > a && a < c && b > c) {x1 = b; x2 = c; x3 = a;}
	
	if(c > a && a > b) {x1 = c; x2 = a; x3 = b;}
	if(c > a && a < b && c > b) {x1 = c; x2 = b; x3 = a;}
	
	if(a == b && a == c){x1 = a; x2 = b; x3 = c;}
    
  	if(a == b && a > c)
	{
		x1 = a; x2 = b; x3 = c;
	}
	if(a == b && a < c)
	{
		x1 = c; x2 = b; x3 = a;
	}
    if(a == c && a > b)
	{
		x1 = a; x2 = c; x3 = b;
	}
	if(a == c && a < b)
	{
		x1 = b; x2 = c; x3 = a;
	}
	if(c == b && c > a)
	{
		x1 = c; x2 = b; x3 = a;
	}
	if(c == b && c < a)
	{
		x1 = a; x2 = b; x3 = c;
	}
		
	while(true)
	{
	if(x1 >= (x2+x3)) {cout << "NAO FORMA TRIANGULO" << endl; break;}
	if(pow(x1,2) == (pow(x2,2)+pow(x3,2)))cout << "TRIANGULO RETANGULO" << endl;
	if(pow(x1,2) > (pow(x2,2)+pow(x3,2)))cout << "TRIANGULO OBTUSANGULO" << endl;
	if(pow(x1,2) < (pow(x2,2)+pow(x3,2)))cout << "TRIANGULO ACUTANGULO" << endl;
	if(x1 == x2  && x1 == x3)cout << "TRIANGULO EQUILATERO" << endl;
	else if(x1 == x2 || x1 == x3 || x2 == x3)cout << "TRIANGULO ISOSCELES" << endl;
	break;
	}
	return 0;
}