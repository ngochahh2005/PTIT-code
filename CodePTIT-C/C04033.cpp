#include <stdio.h>
int dd[1000000];

int main()
{
	int n;
	scanf("%d", &n); 
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		if (dd[x] == 0) {
			printf("%d ", x);
			dd[x]++;
		}
	}
}
