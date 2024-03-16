#include <stdio.h>
#include <math.h>

struct tg {
	double x;
	double y;
};

int main()
{
	int t;
	scanf("%d", &t);
	struct tg a, b, c;
	while (t--) {
		scanf("%lf%lf", &a.x, &a.y);
		scanf("%lf%lf", &b.x, &b.y);
		scanf("%lf%lf", &c.x, &c.y);
		double ab = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
		double ac = sqrt((a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y));
		double bc = sqrt((b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y));
		if (ab + bc > ac && ab + ac > bc && ac + bc > ab) {
			double p = (ab + bc + ac) / 2.0;
			double s = sqrt(p*(p-ab)*(p-ac)*(p-bc));
			printf("%.2lf\n", s);
		} else printf("INVALID\n");
	}
}
