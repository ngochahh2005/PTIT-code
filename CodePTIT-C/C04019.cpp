#include <stdio.h>
int count[30005], dd[30005];

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n], ma = 0;
		for (int i = 0; i < 30005; i++) {
			count[i] = 0;
			dd[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			count[a[i]]++;
			ma = (ma > count[a[i]]) ? ma : count[a[i]];
		}
		for (int i = 0; i < n; i++) {
			if (count[a[i]] == ma && dd[a[i]] == 0) {
				printf("%d ", a[i]);
				dd[a[i]]++;
			}
		}
		printf("\n");
	}
}
