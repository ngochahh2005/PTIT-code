#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int T = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[0]) {
                int check = 1;
                for (int j = 0, k = i; j < i, k < n; j++, k++) {
                    // printf("%d  %d\n", a[j], a[k]);
                    if (a[j] != a[k]) {
                        check = 0;
                        break;
                    }
                }
                if (check == 1) {
                    T = i;
                    break;
                }
            }
        }
        printf("%d\n", T);
    }
}