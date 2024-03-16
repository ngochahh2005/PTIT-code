#include <stdio.h>
#include <math.h>

int count(int n) {
	int d = 0, can = (int)sqrt((double)n);
	if (n % 2 == 0) d++;
	for (int i = 2; i <= can; i++) {
		if (n % i == 0) {
			if (i == can && can * can == n && i % 2 == 0) d++;
			else {
				if (i % 2 == 0) d++;
				if ((n/i) % 2 == 0) d++;
			}
		}
	}
	return d;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d\n", count(n));
	}
}
