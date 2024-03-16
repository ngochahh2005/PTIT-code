#include <stdio.h>

int main()
{
	int n;
	float avg = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		float t;
		scanf("%f", &t);
		avg += t;
	}
	printf("%.3f", avg/n);
}
