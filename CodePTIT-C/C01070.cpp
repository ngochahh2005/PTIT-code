#include <stdio.h>
#include <math.h>
void swap(long long *a, long long *b)
{
	long long t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	long long d1, r1, d2, r2, d3, r3;
	scanf("%lld %lld", &d1, &r1);
	if (d1 < r1) swap(&d1, &r1); 
	scanf("%lld %lld", &d2, &r2);
	if (d2 < r2) swap(&d2, &r2);
	scanf("%lld %lld", &d3, &r3);
	if (d3 < r3) swap(&d3, &r3);
	long long n = d1 * r1 + d2 * r2 + d3 * r3;
	long long can = sqrt(n);
//	printf("%lld	%lld\n", n, can);
	if (can * can != n) printf("NO");
	else {
		if (d1 == d2 && d2 == d3 && d3 == can) printf("YES");
		else {
			if (d2 == can) {
				swap(&d2, &d1);
				swap(&r2, &r1);
			} 
			if (d3 == can) {
				swap(&d3, &d1);
				swap(&r3, &r1);
			}
			if (d1 == can) {
				r1 = can - r1;
				if ((r1 == r2 && r1 == r3) || (r1 == r2 && r1 == d3) || (r1 == d2 && r1 == r3) || (r1 == d2 && r1 == d3)) {
					printf("YES");
				} else printf("NO");
			} else printf("NO");
		} 
	}
}
