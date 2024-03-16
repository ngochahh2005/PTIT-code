#include <stdio.h>
#include <math.h>

float bp (float x) {
	return x*x;
}

struct tg {
	float x;
	float y;
};

int main()
{
	int t;
	scanf("%d", &t);
	struct tg a, b, c;
	while (t--) {
		scanf("%f%f", &a.x, &a.y);
		scanf("%f%f", &b.x, &b.y);
		scanf("%f%f", &c.x, &c.y);
		float ab = sqrt(bp(a.x - b.x) + bp(a.y - b.y));
		float ac = sqrt(bp(a.x - c.x) + bp(a.y - c.y));
		float bc = sqrt(bp(b.x - c.x) + bp(b.y - c.y));
		if (ab + bc > ac && ab + ac > bc && ac + bc > ab) {
			printf("%.3f\n", ab+bc+ac);
		} else printf("INVALID\n");
	}
}
