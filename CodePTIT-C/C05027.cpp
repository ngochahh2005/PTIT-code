#include <stdio.h>

int min(int a, int b) {
	return (a < b) ? a : b;
}

int main() {
	int n;
	scanf("%d", &n);
	int minX = 1000005, minY = 1000005;
	int x, y;
	while (n--) {
		scanf("%d%d", &x, &y);
		minX = min(minX, x);
		minY = min(minY, y);
	}
	printf("%lld", (long long)minX*minY);
} 
