#include <stdio.h>
int max(int a, int b) {
	return (a > b) ? a : b;
}

int main()
{
	int t;
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int n;
		scanf("%d", &n);
		int a[n], ma = 0, vt = 0, d = 1;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n-1; i++) {
			if (a[i] < a[i+1]) d++;
			else {
				if (d > ma) {
					ma = d;
					vt = i-d+1;
				}
				d = 1;
			}
		}
		d = 1;
		printf("Test %d:\n%d\n", o, ma);
		for (int i = 0; i < n-1; i++) {
			if (a[i] < a[i+1]) d++;
			else {
				if (d == ma) {
					vt = i-d+1;
					for (int j = vt; j < vt+ma; j++) {
						printf("%d ", a[j]);
					}
					printf("\n");
				}
				d = 1;
			}
			if (i == n-2 && d == ma) {
				vt = i-d+2;
					for (int j = vt; j < vt+ma; j++) {
						printf("%d ", a[j]);
					}
					printf("\n");
			}
		}
	} 
}
