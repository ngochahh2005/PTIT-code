#include <stdio.h>
#include <math.h>
int sum(int n) {
	int can = (int)sqrt((double)n);
	int s = 1;
	for (int i = 2; i <= can; i++) {
		if (n % i == 0) {
			if (i == can && can * can == n) s += can;
			else {
				s += i + n/i;
			}
		}
	}
	return s;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		if (sum(i) == i) printf("%d ", i);
	}
}
