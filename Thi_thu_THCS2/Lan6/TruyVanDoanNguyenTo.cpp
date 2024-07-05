#include <stdio.h>
#define lmt 1000000

int sang[lmt+5];
void sangnt() {
	sang[0] = 1;
	sang[1] = 1;
	for (int i = 2; i <= 1000; i++) {
		if (sang[i] == 1) continue;
		for (int j = i*i; j <= lmt; j+=i) {
			sang[j] = 1;
		}
	}
}

int main() {
	sangnt();
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int q, l, r;
	scanf("%d", &q);
	while (q--) {
		scanf("%d %d", &l, &r);
		int cnt = 0;
//		printf("%d	%d\n", l, r);
		for (int i = l; i <= r; i++) {
			if (sang[a[i]] == 0) {
				cnt++; 
//				printf("%d	-	", a[i]);	
			}
		}
//		printf("\n");
		printf("%d\n", cnt);
	}
//	for (int i = 0; i <= 100; i++) {
//		if (sang[i] == 0) printf("%d\n", i);
//	}
}
