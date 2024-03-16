#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, d = 0;
		scanf("%d", &n);
		int can = (int)sqrt((double)n);
		if (n % 2 == 0) d++;
		for (int i = 2; i <= can; i++) {
			if (n % i == 0) {
				if (i == can && can * can == n && i % 2 == 0) {
					d++;
				} else {
					if ((n/i) % 2 == 0) d++;
					if (i % 2 == 0)d++;	
				}
			}
		}
		printf("%d\n", d);
	}	
}

