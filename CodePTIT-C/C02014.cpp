#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	n--; 
	for (int i = -n; i <= n; i++) {
		for (int j = -n; j <= n; j++) {
			int t = (abs(i) > abs(j)) ? abs(i) : abs(j);
			printf("%d", t+1);
		}
		printf("\n");
	}
}
