#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int h1, m1, h2, m2;
	scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
	int h = 0, m = 0;
	if(h1 == h2)
	{
		if(m1 == m2)
			h = 24;
		else if(m1 < m2)
			m = m2 - m1;
		else
		{
			h = 24;
			m = m2 - m1;
		}
	}
	else if(h1 > h2)
	{
		h = h2 - h1 + 24;
		if(m1 < m2)
			m = m2 - m1;
		else if(m1 > m2)
			m = m2 - m1;
	}
	else
	{
		h = h2 - h1;
		if(m1 < m2)
			m = m2 - m1;
		else if(m1 > m2)
			m = m2 - m1;
	}
	if(m < 0)
	{
		h--;
		m += 60;
	}
	if(h < 0)
		h += 24;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
	return 0;
}
