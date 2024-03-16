#include <stdio.h>

struct ps {
	int t;
	int m;
} p, q;

int ucln (int a, int b) {
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (b == 0) return a;
	return ucln(b, a % b);
}

int bcnn (int a, int b) {
	return (a*b)/ucln(a, b);
}

int main()
{
	int T;
	scanf("%d", &T);
	for (int o = 1; o <= T; o++) {
		scanf("%d%d", &p.t, &p.m);
		scanf("%d%d", &q.t, &q.m);
		
		int n = ucln(p.t, p.m);
		p.t /= n;
		p.m /= n;
		
		n = ucln(q.t, q.m);
		q.t /= n;
		q.m /= n;
		
		n = bcnn(p.m, q.m);
		struct ps a, b, c, d;
		a.t = p.t*n/p.m;
		a.m = n;
		b.t = q.t*n/q.m;
		b.m = n;
		
		c.t = a.t + b.t;
		c.m = a.m;
		n = ucln(c.t, c.m);
		c.t /= n;
		c.m /= n;
		
		d.t = a.t*b.m;
		d.m = a.m*b.t;
		n = ucln(d.t, d.m);
		d.t /= n;
		d.m /= n; 
		
		printf("Case #%d:\n", o);
		printf("%d/%d %d/%d\n", a.t, a.m, b.t, b.m);
		printf("%d/%d\n", c.t, c.m);
		printf("%d/%d\n", d.t, d.m);
	}
}
