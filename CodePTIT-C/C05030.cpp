#include <stdio.h>

int main() {
	int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n][m];

        int ddc[m][3], ddd[n][3];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < 3; j++) {
                ddc[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                ddd[i][j] = 0;
            }
        }

        char str[1005];
        getchar();
        for (int i = 0; i < n; i++) {
            gets(str);
            for (int j = 0; j < m; j++) {
                a[i][j] = str[j] - '0';
                ddc[j][a[i][j]]++;
                ddd[i][a[i][j]]++;
            }
        }
        
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 1) {
                    cnt += ddd[i][2] * ddc[j][2];
                } else if (a[i][j] == 2) {
                    cnt += ddd[i][1] * ddc[j][1];
                }
            }
        }
        printf("%lld\n", cnt);
    }
}
