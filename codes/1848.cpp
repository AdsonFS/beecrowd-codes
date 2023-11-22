#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n = 0, x1 = 0;
	int vet[3] = {0, 0, 0};
	char txt[10];
	while(n < 3)
	{
		cin.getline(txt, 10);
		if(strcmp(txt, "caw caw") == 0)
			n++;
		if(strcmp(txt, "--*") == 0)
			vet[n] += 1;
		if(strcmp(txt, "-*-") == 0)
			vet[n] += 2;
		if(strcmp(txt, "-**") == 0)
			vet[n] += 3;
		if(strcmp(txt, "*--") == 0)
			vet[n] += 4;
		if(strcmp(txt, "*-*") == 0)
			vet[n] += 5;
		if(strcmp(txt, "**-") == 0)
			vet[n] += 6;
		if(strcmp(txt, "***") == 0)
			vet[n] += 7;
	}
	for(int i = 0; i < 3; i++)
		cout << vet[i] << endl;
	
	return 0;
}