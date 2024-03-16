#include <stdio.h>
int dd[100005], count[100005];

int main()
{
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
		printf("Test %d:\n", o);
		for (int i = 0; i < n; i++) {
			if (dd[a[i]] == 0) {
				printf("%d xuat hien %d lan\n", a[i], count[a[i]]);
				dd[a[i]] = 1;
			} 
		}
	}
}
