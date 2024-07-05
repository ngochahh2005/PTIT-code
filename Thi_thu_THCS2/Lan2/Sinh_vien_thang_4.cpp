#include <stdio.h>
#include <string.h>

typedef struct sinhVien{
    char nm[55], bd[55], dc[25];
    float gpa;
}sv;

int check(char *s) {
    int kt = 0;
    int t = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '/' && kt == 1) break;
        if (s[i] == '/' && kt == 0) kt = 1;
        if (kt == 1 && s[i] != '/') {
            t = t * 10 + (s[i] - '0');
        }
    }
    // printf("%d\n", t);
    if (t == 4) return 1;
    return 0;
}

int main() {
	int n;
    scanf("%d", &n);
    sv a[n+5];
    for (int i = 0; i < n; i++) {
        getchar();
        gets(a[i].nm);
        gets(a[i].bd);
        gets(a[i].dc);
        scanf("%f", &a[i].gpa);
        if (check(a[i].bd) == 1) printf("%s %s %s %.2f\n", a[i].nm, a[i].bd, a[i].dc, a[i].gpa);
    }
}
