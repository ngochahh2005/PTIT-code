#include <stdio.h>
#include <math.h>

int main() {
	int x, y;
	while (scanf("%d%d", &x, &y) != EOF) {
		if (x == y) {
			printf("0\n");
			continue;
		}
		float s;
		if (x < y) s = (float)y - x;
		else s = (float)x - y;
		float can = floor(sqrt(s));
		float n = (s-can*can)/can;
		float t = can*2-1+ceil(n);
		// printf("%f	%f\n", can, n);
		printf("%d\n", (int)t);
	}
}
