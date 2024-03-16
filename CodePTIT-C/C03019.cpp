#include <stdio.h>
#include <math.h>
//int kt(int x) {
//	int s = 0, n = x, sumDigit = 0;
//	while (x > 0) {
//		s += x % 10;
//		sumDigit += x % 10;
//		x /= 10;
//		if (x == 0) break;
//		s *= 10;
//	}
//	if (s != n) return 0;
//	if (sumDigit % 10 != 0) return 0;
//	return 1;
//} 

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		if (n == 2) printf("1\n");
		else {
			if (n % 2 != 0) printf("9");
			else printf("18");
			int d = (int)ceil((double)n/2);
			d -= 2;
			for (int i = 0; i < d; i++) 
				printf("0");
			printf("\n");
		}
	}
}
