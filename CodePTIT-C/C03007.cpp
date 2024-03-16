#include <stdio.h>
int sang[1000005];
int dao(int x)
{
    int s = 0;
    while (x != 0)
    {
        s += x % 10;
        x /= 10;
        if (x == 0) break;
        s *= 10;
    }
    return s;
}

int main()
{
	sang[0] = 1;
	sang[1] = 1;
	for (int i = 2; i <= 1000; i++) {
		if (sang[i] == 1) continue;
		for (int j = 2*i; j <= 1000000; j += i) {
			sang[j] = 1;
		}
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b, d = 0;
		scanf("%d%d", &a, &b);
		for (int i = a; i <= b; i++) {
			if (sang[i] == 0 && dao(i) == i) {
				printf("%d ", i);
				d++;	
			}
			if (d == 10) {
				printf("\n");
				d = 0;
			}
		}
		printf("\n\n");
	}
}
