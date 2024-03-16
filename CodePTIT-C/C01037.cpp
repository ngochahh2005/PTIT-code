#include <stdio.h>

int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if (a > b) {
		long long t = a;
		a = b;
		b = t; 
	} 
	long long n = b - a + 1;
	long long s = n/2*(a+b);
	if (n % 2 != 0) {
		s += (a+b)/2;
	}
	printf("%lld", s);
}
