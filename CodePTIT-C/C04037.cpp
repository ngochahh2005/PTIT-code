#include <stdio.h>
int dd[1000000], count[1000000];

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		count[a[i]]++;
	}
	int d = 0; 
	for (int i = 0; i < n; i++) {
		if (count[a[i]] > 1 && dd[a[i]] == 0) {
			d++;
			dd[a[i]] = 1;
		} 
	}
	for (int i = 0; i < n; i++) {
		dd[a[i]] = 0;
	}
	printf("%d\n", d);
	for (int i = 0; i < n; i++) {
		if (dd[a[i]] == 0 && count[a[i]] > 1) {
			printf("%d ", a[i]);
			dd[a[i]] = 1;
		} 
	}
	
}
