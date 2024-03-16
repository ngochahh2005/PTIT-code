#include <stdio.h>
#include <stdlib.h>

int ss(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main()
{
	int n;
	scanf("%d", &n);
	int chan[n], le[n], dc = 0, dl = 0;
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		if (t % 2 == 0) {
			chan[dc] = t;
			dc++;
		} else {
			le[dl] = t;
			dl++;
		}
	}
	qsort(chan, dc, sizeof(int), ss);
	qsort(le, dl, sizeof(int), ss);
	for (int i = 0; i < dc; i++) printf("%d ", chan[i]);
	for (int i = 0; i < dl; i++) printf("%d ", le[i]);
	
}
