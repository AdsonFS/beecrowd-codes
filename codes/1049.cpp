#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	string x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	
	if(x1 == "vertebrado" && x2 == "ave" && x3 == "carnivoro") cout << "aguia" << endl;
	if(x1 == "vertebrado" && x2 == "ave" && x3 == "onivoro") cout << "pomba" << endl;
	if(x1 == "vertebrado" && x2 == "mamifero" && x3 == "onivoro") cout << "homem" << endl;
	if(x1 == "vertebrado" && x2 == "mamifero" && x3 == "herbivoro") cout << "vaca" << endl;
	
	if(x1 == "invertebrado" && x2 == "inseto" && x3 == "hematofago") cout << "pulga" << endl;
	if(x1 == "invertebrado" && x2 == "inseto" && x3 == "herbivoro") cout << "lagarta" << endl;
	if(x1 == "invertebrado" && x2 == "anelideo" && x3 == "hematofago") cout << "sanguessuga" << endl;
	if(x1 == "invertebrado" && x2 == "anelideo" && x3 == "onivoro") cout << "minhoca" << endl;
	
	return 0;
}