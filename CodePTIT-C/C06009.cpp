#include <stdio.h>
#include <string.h>

int check1(int a[]) {
	for (int i = 0; i < 4; i++) {
		if (a[i] >= a[i+1]) return 0;
	}
	return 1;
}

int check2(int a[]) {
	for (int i = 0; i < 4; i++) {
		if (a[i] != a[i+1]) return 0;
	}
	return 1;
}

int check3(int a[]) {
	for (int i = 0; i < 1; i++) {
		if (a[i] != a[i+1]) return 0;
	}
	if (a[3] != a[4]) return 0;
	return 1;
}

int check4(int a[]) {
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (a[i] == 6 || a[i] == 8) cnt++;
	}
	return (cnt == 5) ? 1 : 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		char s1[6], s2[6];
		int a[6], n = 0;
		scanf("%s%s", &s1, &s2);
		for (int i = 0; i < strlen(s2); i++) {
			if (s2[i] >='0' && s2[0] <='9') {
				a[n++] = s2[i] - '0';
			}
		}
		if (check1(a) == 1 || check2(a) == 1 || check3(a) == 1 || check4(a) == 1)
			printf("YES\n");
		else printf("NO\n");
	}
}
