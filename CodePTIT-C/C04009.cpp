#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int chan[n], le[n], dc = 0, dl = 0;
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		if (x % 2 == 0) {
			chan[dc] = x;
			dc++;
		} else {
			le[dl] = x;
			dl++;
		}
	}
	for (int i = 0; i < dc; i++) {
		printf("%d ", chan[i]);
	}
	printf("\n");
	for (int i = 0; i < dl; i++) {
		printf("%d ", le[i]);
	}
}
