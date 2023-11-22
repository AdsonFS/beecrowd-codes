#include <iostream>
#include <cstring>;
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	string str;
	while(cin >> str)
	{
		if (str == "brasil") 				cout << "Feliz Natal!\n";
		else if (str == "alemanha") 		cout << "Frohliche Weihnachten!\n";
		else if (str == "austria") 			cout << "Frohe Weihnacht!\n";
		else if (str == "coreia") 			cout << "Chuk Sung Tan!\n";
		else if (str == "espanha") 			cout << "Feliz Navidad!\n";
		else if (str == "grecia") 			cout << "Kala Christougena!\n";
		else if (str == "estados-unidos") 	cout << "Merry Christmas!\n";
		else if (str == "inglaterra") 		cout << "Merry Christmas!\n";
		else if (str == "australia") 		cout << "Merry Christmas!\n";
		else if (str == "portugal") 		cout << "Feliz Natal!\n";
		else if (str == "suecia") 			cout << "God Jul!\n";
		else if (str == "turquia") 			cout << "Mutlu Noeller\n";
		else if (str == "argentina") 		cout << "Feliz Navidad!\n";
		else if (str == "chile") 			cout << "Feliz Navidad!\n";
		else if (str == "mexico") 			cout << "Feliz Navidad!\n";
		else if (str == "antardida") 		cout << "Merry Christmas!\n";
		else if (str == "canada") 			cout << "Merry Christmas!\n";
		else if (str == "irlanda") 			cout << "Nollaig Shona Dhuit!\n";
		else if (str == "belgica") 			cout << "Zalig Kerstfeest!\n";
		else if (str == "italia") 			cout << "Buon Natale!\n";
		else if (str == "libia") 			cout << "Buon Natale!\n";
		else if (str == "siria") 			cout << "Milad Mubarak!\n";
		else if (str == "marrocos") 		cout << "Milad Mubarak!\n";
		else if (str == "japao") 			cout << "Merii Kurisumasu!\n";
		else cout << "--- NOT FOUND ---\n";
	}        
    
	return 0;
}