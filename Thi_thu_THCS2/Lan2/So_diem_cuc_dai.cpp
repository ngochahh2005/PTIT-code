#include <stdio.h>

int a[105][105];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i<= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int cnt = 0;
    for (int i = 1; i<= n; i++) {
        for (int j = 1; j <= m; j++) {
            int t = a[i][j];
            if (t > a[i-1][j] && t > a[i+1][j] && t > a[i-1][j-1] && t > a[i+1][j+1] && t > a[i-1][j+1] && t > a[i+1][j-1] && t > a[i][j-1] && t > a[i][j+1]) {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
}