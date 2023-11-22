#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Brinquedo
{
public:
	int D, P;
	double div;
	Brinquedo(int d, int p)
	{
		this->D = d;
		this->P = p;
		this->div = (double) p / d;
	}
};

bool comparar(Brinquedo const &x1, Brinquedo const &x2)
{
	return x1.div > x2.div;
}

int main(int argc, char *argv[])
{
	int n, t, h = 1;
	int d, p;

	while(cin >> n >> t && n != 0)
	{
		vector<Brinquedo> bb;

		for(int i = 0; i < n; i++)
		{
			cin >> d >> p;

			Brinquedo b(d, p);
			bb.push_back(b);
		}

		sort(bb.begin(), bb.end(), comparar);
		
		int i = 0;
		int pt = 0, dt = 0;
		while(i < n)
		{
			int tempo = dt + bb[i].D;
			
			if(tempo <= t)
			{
				pt += bb[i].P;
				dt = tempo;
			}
			else
				i++;
		}
		cout << "Instancia " << h << endl;
		cout << pt << endl << endl;
		h++;
	}

	return 0;
}