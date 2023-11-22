#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	int n, s1, b1, a1, s2, b2, a2;
	int s1t = 0, b1t = 0, a1t = 0;
	int s2t = 0, b2t = 0, a2t = 0;
	string nome;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> nome;
		cin >> s1 >> b1 >> a1;
		cin >> s2 >> b2 >> a2;
		s1t += s1; b1t += b1; a1t += a1;
		s2t += s2; b2t += b2; a2t += a2;
	}
	
	cout << "Pontos de Saque: " << double(100.0/s1t)*s2t << " %.\n";
	cout << "Pontos de Bloqueio: " << double(100.0/b1t)*b2t << " %.\n";
	cout << "Pontos de Ataque: " << double(100.0/a1t)*a2t << " %.\n";
	
	return 0;
}