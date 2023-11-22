#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int h;
	int v;
	
	cin >> h; cin >> v;
	
	cout << fixed << setprecision(3);
	cout << h*v/12.0 << endl;
	
	return 0;
}
