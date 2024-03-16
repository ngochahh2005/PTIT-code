#include <stdio.h>
#include <string.h>

int main() {
	int n, cnt = 0, max = 0, pos;
	char str[1005][1005];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &str[i]);
		int k, m, d = 0;
		scanf("%d%d", &k, &m);
		while (m / k != 0) {
			d += m / k;
			m = m%k + (m/k)*2;
		}
		cnt += d;
		if (max < d) {
			max = d;
			pos = i;
		}
	}
	printf("%d\n%s", cnt, str[pos]);
}
