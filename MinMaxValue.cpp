#include <iostream>
#include<cmath>
using namespace std;
//kiem tra tang giam hay giam
bool checktangdangiamdan(long long n) 
{
	long long d, a, N, S = 0;
	N = n;
	while (n > 0) 
	{
		d = n % 10;
		n /= 10;
		if (d < n % 10) return false;
	}
	return true;
	while (N > 0) 
	{
		a = N % 10;
		N /= 10;
		if (a > N % 10) return false;
	}
	return true;
}
// tim chu so min, max
long long max(long long n) 
{
	long long d, max = 0;
	while (n > 0) 
	{
		d = n % 10;
		if (d > max) max = d;
		n /= 10;
	}
	return max;
}
long long min(long long n) 
{
	long long d, min;
	min = n % 10;
	while (n > 10) 
	{
		n /= 10;
		d = n % 10;
		if (min > d) min = d;
	}
	return min;
}
