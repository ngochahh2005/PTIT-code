#include <stdio.h>

int find (int a[], int d, int c, int k) {
    for (int i = d; i <= c; i++) {
        if (a[i] == k) return i;
    }
    return 1e9;
}

int main() {
	int t;
    scanf("%d", &t);
    while (t--) {
        int n, A;
        scanf("%d%d", &n, &A);
        int a[n+5];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int mi = 1e9, pos = -1;
        for (int i = 0; i < n-1; i++) {
            int x = find(a, i+1, n-1, A-a[i]);
            if (mi > x - i) {
                mi = x - i;
            }
        }
        if (mi != 1e9) printf("%d\n", mi);
        else printf("NOT EXIST\n");
    }
}
