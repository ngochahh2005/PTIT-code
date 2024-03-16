#include <stdio.h>
int main()
{
	int d;
	scanf("%d", &d);
	int y, w;
	y = d/365;
	d %= 365;
	w = d/7;
	d %= 7;
	printf("%d %d %d", y, w, d);
}
