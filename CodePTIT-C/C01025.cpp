#include <stdio.h> 

int max(int a, int b) {
	return (a > b) ? a : b;
}

int min(int a, int b) {
	return (a < b) ? a : b;
}

int main() {
	int xmax = -100, ymax = -100, xmin = 100, ymin = 100;
	int x, y;
	for (int i = 0; i < 4; i++) {
		scanf("%d%d", &x, &y);
		xmax = max(xmax, x);
		ymax = max(ymax, y);
		xmin = min(xmin, x);
		ymin = min(ymin, y);
	}
	x = xmax - xmin;
	y = ymax - ymin;
	int ma = max(x, y);
	printf("%d", ma*ma);
}