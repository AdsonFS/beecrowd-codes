#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	
	while(cin >> n && n != 0)
	{
		deque<int> num;
		vector<int> seq;
		int topo;
		for(int i = n; i >= 1; i--)
			num.push_back(i);
		topo = num.size() - 1;
		while(topo > 0)
		{
			seq.push_back(num[topo]);
			num.pop_back();
			num.push_front(num[--topo]);
			num.pop_back();
		}
		cout << "Discarded cards: ";
		for(int i = 0; i < n-2; i++)
			cout << seq[i] << ", ";
		if(n > 1)
			cout << seq[n-2];
		
		cout << "\nRemaining card: " << num[0] << endl;
	}
	
	return 0;
}
