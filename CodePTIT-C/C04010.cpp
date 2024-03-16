#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n], mi1 = 1000000000, mi2 = 1000000000; 
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		mi1 = (mi1 > a[i]) ? a[i] : mi1;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > mi1 && a[i] < mi2) mi2 = a[i];
	}
	printf("%d %d", mi1, mi2);
}
