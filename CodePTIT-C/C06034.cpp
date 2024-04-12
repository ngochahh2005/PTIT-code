#include <stdio.h>
#include <string.h>

int main() {
	int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
	int t;
	scanf("%d", &t);
	getchar();
	while (t--) {
		char str[1005];
		gets(str);
		int res = 0, sau = 0, truoc = 0;
		for (int i = strlen(str)-1; i >= 0; i--) {
			switch (str[i]) {
				case 'I':
					sau = 1;
					break;
				case 'V':
					sau = 5;
					break;
				case 'X':
					sau = 10;
					break;
				case 'L':
					sau = 50;
					break;
				case 'C':
					sau = 100;
					break;
				case 'D':
					sau = 500;
					break;
				default :
					sau = 1000;
					break;
			}
			if (i == strlen(str)-1) {
				res += sau;
				truoc = sau;
				continue;
			}
			// printf("%d	%d\n", truoc, sau);
			if (truoc > sau) res -= sau;
			else res += sau;
			truoc = sau;
		}
		printf("%d\n", res);
	}
} 
