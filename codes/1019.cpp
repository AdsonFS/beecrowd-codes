#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int N; cin >> N;
	int s = 0;
	int m = 0;
	int h = 0;
	
	if(N >= 3600)
	{
		h = (N/3600); N = N - h*3600;
	}
	if(N >= 60)
	{
		m = (N/60); N = N - m*60;
	}  
	s = N;
	
	cout << h << ":" << m << ":" << s << endl;
	
	
	
	return 0;
}