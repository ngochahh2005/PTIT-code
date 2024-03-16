#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void reverse(int a[], int n) {
	int l = 0, r = n-1;
	while (l < r) {
		swap(&a[l], &a[r]);
		l++;
		r--;
	}
} 

void solve(char a[], char b[]) {
	int l1 = strlen(a), l2 = strlen(b), n = 0;
	int x[505], y[505], z[505];
	for (int i = 0; i < l1; i++) {
		x[i] = a[i] - '0';
	}
	for (int i = 0; i < l2; i++) {
		y[i] = b[i] - '0';
	}
	reverse(x, l1);
	reverse(y, l2);
	
	for (int i = l2; i < l1; i++) {
		y[i] = 0;
	}
	
	int nho = 0;
	
	for (int i = 0; i < l1; i++) {
		int t = x[i] + y[i] + nho;
		nho = t / 10;
		z[n++] = t % 10;
	}
	if (nho > 0) z[n++] = nho;
	
	for (int i = n-1; i >= 0; i--) {
		printf("%d", z[i]);
	}
	printf("\n");
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		char a[505], b[505];
		scanf("%s%s", &a, &b); 
		if (strlen(a) > strlen(b)) solve(a, b);
		else solve(b, a);
	}
}
