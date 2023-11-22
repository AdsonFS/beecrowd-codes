#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int a, s, d, f, g;
	cin >> a >> s >> d >> f >> g;
	int p, i, po, ne;
	p = 0; i = 0; po = 0; ne = 0;
	
	if( a%2 == 0 ) {p++;} else {i++;}
	if( s%2 == 0 ) {p++;} else {i++;} 
	if( d%2 == 0 ) {p++;} else {i++;} 
	if( f%2 == 0 ) {p++;} else {i++;} 
	if( g%2 == 0 ) {p++;} else {i++;} 
	
	if( a > 0 ) {po++;} else if( a < 0) {ne++;} 
	if( s > 0 ) {po++;} else if( s < 0) {ne++;} 
	if( d > 0 ) {po++;} else if( d < 0) {ne++;} 
	if( f > 0 ) {po++;} else if( f < 0) {ne++;} 
	if( g > 0 ) {po++;} else if( g < 0) {ne++;} 
	
	
	cout << p << " valor(es) par(es)" << endl;
	cout << i << " valor(es) impar(es)" << endl;
	cout << po << " valor(es) positivo(s)" << endl;
	cout << ne << " valor(es) negativo(s)" << endl;
			
	return 0;
}