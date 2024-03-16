#include <stdio.h>

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int a[], int b[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (b[j] > b[i]) {
				swap(&a[j], &a[i]);
				swap(&b[j], &b[i]);
			}
		}
	}
}

int find(int a[], int x, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == x) return i;
	}
	return -1;
}

int check(int n) {
	int dg = n % 10;
	while (n > 0) {
		n /= 10;
		if (dg < n % 10) return 0;
		dg = n % 10;
	}
	return 1;
}

int a[100005], cnt[100005];

int main() {
	int n, count = 0;
	while (scanf("%d", &n) != -1) {
		if (check(n) == 1) {
			int pos = find(a, n, count);
			if (pos == -1) {
				cnt[count]++;
				a[count++] = n;
			} else {
				cnt[pos]++;
			}
		}
	}
	sort(a, cnt, count);
	for (int i = 0; i < count; i++) {
		printf("%d %d\n", a[i], cnt[i]);
	}
}
