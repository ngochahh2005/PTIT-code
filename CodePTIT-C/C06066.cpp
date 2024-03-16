#include <stdio.h>
#include <string.h>

void reverse(char *str) {
	int l = 0, r = strlen(str) - 1;
	while (l < r) {
		char tmp = str[l];
		str[l] = str[r];
		str[r] = tmp;
		l++;
		r--;
	}
}

char* add(char *s1, char *s2) {
	static char res[205];
	int l1 = strlen(s1), l2 = strlen(s2);
	int nho = 0, n = 0;
	int i = l1 - 1, j = l2 - 1;
	while (i >= 0 || j >= 0 || nho) {
		int sum = nho;
		if (i >= 0) sum += s1[i--] - '0';
		if (j >= 0) sum += s2[j--] - '0';
		res[n++] = sum % 10 + '0';
		nho = sum / 10;
	}
	res[n] = '\0';
	reverse(res);
	return res;
}

int main() {
	char str[205];
	scanf("%s", &str);
	while (strlen(str) > 1) {
		int l = strlen(str);
		char s1[105], s2[105];
		strncpy(s1, str, l/2);
		s1[l/2] = '\0';
		strcpy(s2, str + l/2);
		char *result = add(s1, s2);
		printf("%s\n", result);
		strcpy(str, result);
	}
}
