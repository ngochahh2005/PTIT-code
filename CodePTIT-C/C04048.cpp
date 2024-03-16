#include <stdio.h>
#include <math.h>

int dd[5000];

int main() {
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int mid, l, r;
	while (m--){
		scanf("%d", &mid);
		l = (mid - k > 1) ? mid - k : 1;
		r = (mid + k < n) ? mid + k : n;
//		printf("%d	%d\n", l, r);
		for (int i = l; i <= r; i++) {
			dd[i]++;
		}
	}
	int cnt = 0, d = 0;
	for (int i = 1; i <= n; i++) {
		if (dd[i] == 0) {
			d++;
		} else {
//			printf("%d\n", d);
			cnt += (int)ceil((double)d/(1+k*2));
			d = 0; 
		}
//		printf("%d	", dd[i]);
	}
	cnt += (int)ceil((double)d/(1+k*2));
	printf("%d", cnt);
} 
