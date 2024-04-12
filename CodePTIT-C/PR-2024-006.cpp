#include <stdio.h>
#include <stdlib.h>

int tang(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int giam(const void *a, const void *b) {
    return -(*(int*)a - *(int*)b); 
}

void ghepBA(int a[], int m, int b[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    for (int i = 0; i < m; i++) {
        printf("%d", a[i]);
        if (i < m-1) printf(" ");
    }
}

void ghepAB(int a[], int m, int b[], int n) {
    for (int i = 0; i < m; i++) {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d", b[i]);
        if (i < n-1) printf(" ");
    }
}

void solve(int a[], int m, int b[], int n, int c) {
    if (c == 'T') {
        int j = 0;
        for (int i = m; i < m+n; i++) a[i] = b[j++];
        qsort(a, m+n, sizeof(int), tang);
        for (int i = 0; i < m+n; i++) {
            printf("%d", a[i]);
            if (i < m+n-1) printf(" ");
        }
    } else if (c == 'G') {
        int j = 0;
        for (int i = m; i < m+n; i++) a[i] = b[j++];
        qsort(a, m+n, sizeof(int), giam);
        for (int i = 0; i < m+n; i++) {
            printf("%d", a[i]);
            if (i < m+n-1) printf(" ");
        }
    } else if (c == 'F') {
        ghepAB(a, m, b, n);
    } else ghepBA(a, m, b, n);
    printf("\n");
}

int main() {
	int t;
    scanf("%d", &t);
    while (t--) {
        int m, n;
        char c;
        scanf("%d %d %c", &m, &n, &c);
        int a[m+n+5], b[m+n+5];
        for (int i = 0; i < m; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        solve(a, m, b, n, c);
    }
}
