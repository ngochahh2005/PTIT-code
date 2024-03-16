#include <stdio.h>
int dd[1000000], count[1000000];

int main()
{
	int n, kt = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		count[a[i]]++;
	}
	for (int i = 0; i < n; i++) {
		if (dd[a[i]] == 0 && count[a[i]] > 1) {
			printf("%d ", a[i]);
			dd[a[i]] = 1;
			kt = 1;
		} 
	}
	if (kt == 0) printf("0");
}
