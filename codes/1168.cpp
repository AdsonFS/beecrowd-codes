#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int vec[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	int n, leds;
	char num[101];

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> num;
		leds = 0;
		int tam = strlen(num);
		for(int j = 0; j < tam; j++)
		{
			switch(num[j])
			{
			case '0':
				leds += 6;
				break;
			case '1':
				leds += 2;
				break;
			case '2':
				leds += 5;
				break;
			case '3':
				leds += 5;
				break;
			case '4':
				leds += 4;
				break;
			case '5':
				leds += 5;
				break;
			case '6':
				leds += 6;
				break;
			case '7':
				leds += 3;
				break;
			case '8':
				leds += 7;
				break;
			case '9':
				leds += 6;
				break;
			}

		}
		cout << leds << " leds" << endl;
	}


	return 0;
}
