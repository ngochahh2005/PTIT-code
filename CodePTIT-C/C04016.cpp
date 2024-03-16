#include <stdio.h>
#include <stdlib.h>
#define x 100000
int ss(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}
int dd[100005], count[100005], sang[x+5];

int main()
{
	sang[0] = 1;
	sang[1] = 1;
	for (int i = 2; i <= 316; i++) {
		if (sang[i] == 1) continue;
		for (int j = 2*i; j <= x; j+=i) {
			sang[j] = 1;
		}
	}
	int t;
	scanf("%d", &t);
	for (int o = 1; o <= t; o++) {
		int n;
		for (int i = 0; i <= 100000; i++) {
			dd[i] = 0;
			count[i] = 0;
		}
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			count[a[i]]++;
		}
		qsort(a, n, sizeof(int), ss);
		printf("Test %d:\n", o);
		for (int i = 0; i < n; i++) {
			if (dd[a[i]] == 0 && sang[a[i]] == 0) {
				printf("%d xuat hien %d lan\n", a[i], count[a[i]]);
				dd[a[i]] = 1;
			} 
		}
	}
}
