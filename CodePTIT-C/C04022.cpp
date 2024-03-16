#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n], ma1 = -1000000000, ma2 = -1000000000; 
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		ma1 = (ma1 < a[i]) ? a[i] : ma1;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < ma1 && a[i] > ma2) ma2 = a[i];
	}
	printf("%d %d", ma1, ma2);
}
