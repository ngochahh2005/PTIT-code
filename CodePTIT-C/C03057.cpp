#include <stdio.h>

void solve(long long x, long long y) {
	long long xMax = 0, xMin = 0, t, k = 1;
	while (x > 0) {
		t = x % 10;
		if (t == 5 || t == 6) {
			xMax += 6*k;
			xMin += 5*k;
		} else {
			xMax += t*k;
			xMin += t*k;
		}
		x /= 10;
		if (x == 0) break;
		k *= 10;
	}
	k = 1;
//	printf("%lld %lld\n", xMin, xMax);
	long long yMax = 0, yMin = 0;
	while (y > 0) {
		t = y % 10;
		if (t == 5 || t == 6) {
			yMax += 6*k;
			yMin += 5*k;
		} else {
			yMax += t*k;
			yMin += t*k;
		}
		y /= 10;
		if (y == 0) break;
		k *= 10;
	}
//	printf("%lld %lld\n", yMin, yMax);
	printf("%lld %lld\n", xMin+yMin, xMax+yMax);
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long x, y;
		scanf("%lld%lld", &x, &y);
		solve(x,y);
	}
}
