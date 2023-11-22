#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	float N1, N2, N3, N4;
	cin >> N1 >> N2 >> N3 >> N4;
	
	float media = ((N1*2) + (N2*3) + (N3*4) + N4)/10.0;
	cout << fixed << setprecision(1);
	
	cout << "Media: " << media << endl;
	
	if(media >= 7) cout << "Aluno aprovado." << endl;
	if(media < 5) cout << "Aluno reprovado." << endl;
	if(media >= 5 && media < 7.0)
	{
		cout << "Aluno em exame." << endl;
		float N5; cin >> N5;
		cout << "Nota do exame: " << N5 << endl;
		
		
		float media2 = (media+N5)/2.0;
		
		if(media2 >= 5) cout << "Aluno aprovado." << endl;
		if(media2 < 5) cout << "Aluno reprovado." << endl;
		
		cout << "Media final: " << media2 << endl;
	}
	
	
	
	return 0;
}