#include <stdio.h>

struct thiSinh {
	int mts;
	char t[105], ns[105];
	float td;
};

struct thiSinh ts[1005];

float max(float a, float b) {
	return (a > b) ? a : b;
}

int main()
{
	int n;
	scanf("%d", &n);
	float m1, m2, m3, ma = 0;
	for (int i = 0; i < n; i++) {
		getchar();
		ts[i].mts = i+1;
		gets(ts[i].t);
		gets(ts[i].ns);
		scanf("%f%f%f", &m1, &m2, &m3);
		ts[i].td = m1 + m2 + m3;
		ma = max(ma, ts[i].td);
	}
	for (int i = 0; i < n; i++) {
		if (ts[i].td == ma) {
			printf("%d %s %s %.1f\n", ts[i].mts, ts[i].t, ts[i].ns, ts[i].td);
		}
	}
}
