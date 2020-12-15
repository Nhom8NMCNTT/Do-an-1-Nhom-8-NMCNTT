#include <iostream>
using namespace std;

void phantichthuasonguyento(long long n)
{
	long long d = 0;
	for (long long i = 2; i <= n; i++)
	{
		if (n == 0)
			break;
		while (n % i == 0)
		{
			d++;
			n /= i;
		}
		if (d != 0)
			cout << i << "^" << d << "*";
		d = 0;
	}
}
