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

void sub(char a[], char b[]) {
	int l1 = strlen(a), l2 = strlen(b), n = 0;
	int x[1005], y[1005], z[1005];
	for (int i = 0; i < l1; i++) x[i] = a[i] - '0';
	for (int i = 0; i < l2; i++) y[i] = b[i] - '0';
	
	reverse(x, l1);
	reverse(y, l2);
	
	for (int i = l2; i < l1; i++) y[i] = 0;
	int nho = 0;
	for (int i = 0; i < l1; i++) {
		int t = x[i] - y[i] + nho;
		if (t < 0) {
			z[n++] = t + 10;
			nho = -1;
		} else {
			z[n++] = t;
			nho = 0;
		}
	}
	int check = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (z[i] != 0) check = 1;
		if (check == 1) printf("%d", z[i]);
	}
	if (check == 0) printf("0");
	printf("\n");
}

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while (t--) {
		char a[1005], b[1005];
		gets(a);
		gets(b);
		if (strlen(a) > strlen(b) || (strlen(a) == strlen(b) && strcmp(a, b) > 0)) 
			sub(a, b);
		else sub(b, a);
	} 
}
