#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<ll,ll> factors;
map<ll,ll> :: iterator it;


void Primo(ll N)
{
	factors.clear();
	while(N%2 == 0) ++factors[2], N >>=1;
	for(ll PF = 3; PF*PF <= N; PF += 2)
	{
		while(N%PF == 0)
			N /= PF, factors[PF]++;
	}
	if(N > 1) factors[N] = 1;
}

int main() {
	ll a,b;
	
	cin >> a;
	
	for(ll i = 0; i < a; i++)
	{
		cin >> b;
		Primo(b);
		for(it = factors.begin(); it != factors.end(); it++)
		{
			if(it->second % 2 == 1)
				b *= it->first;
		}
		
		cout << "Caso #" << i+1 << ": " << b << endl;
		
	}
  
    
  return 0;
}
