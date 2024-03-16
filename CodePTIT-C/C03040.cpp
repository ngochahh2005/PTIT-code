#include <stdio.h>
#include <math.h>

int sumDigit(int n) {
	int s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	} 
	return s;
}

int sum(int n) {
	int i = 2, s = 0;
	while (n > 1) {
		while (n % i != 0) i++;
		s += sumDigit(i);
		n /= i;
	}
	return s;
}

int main()
{
	int n;
	scanf("%d", &n);
	if (sumDigit(n) == sum(n)) printf("YES");
	else printf("NO");
}
