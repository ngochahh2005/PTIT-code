#include <stdio.h>
#include <math.h>

int ktnt(int n) {
	int can = (int)sqrt((double)n);
	for (int i = 2; i <= can; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
} 
void xuli(int a, int b) {
	for (int p = 2; p < 12; p++) {
		if (ktnt(p) == 1) {
			int x1 = (int)pow(2, p) - 1;
			if (ktnt(x1) == 1) {
				int x2 = (int)pow(2, p-1);
				if (x1*x2 >= a && x1*x2 <= b) {
					printf("%d ", x1*x2);
				}
			}
		}
	}
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}
	xuli(a,b);
	
}
