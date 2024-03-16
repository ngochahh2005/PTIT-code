#include <stdio.h>

int n;
int dd[100005];

int main()
{
	int kt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n-1; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		dd[a]++;
		dd[b]++;
		if (dd[a] == n-1 || dd[b] == n-1) kt = 1;
	}
	if (kt == 1) printf("Yes");
	else printf("No");
}
