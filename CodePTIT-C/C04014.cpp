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
	for (int i = 0; i < n; i++) {
		if (dd[a[i]] == 0) {
			printf("%d %d\n", a[i], count[a[i]]);
			dd[a[i]] = 1;
		} 
	}
}
