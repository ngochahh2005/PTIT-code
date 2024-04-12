#include <stdio.h>
#include <string.h>
#define es 0.000000001

void swap(double *a, double *b) {
    double t = *a;
    *a = *b;
    *b = t;
}

void cswap(char *a, char *b) {
    char t[1005];
    strcpy(t, a);
    strcpy(a, b);
    strcpy(b, t);
}

int check (double b[], int m) {
    for (int i = 1; i < m; i++) {
        if (b[0] - b[i] > es) return 0;
    }
    return 1;
}

void inVet(char a[][10005], double b[], int m) {
    for (int i = 0; i < m; i++) {
        printf("%s", a[i]);
        if (i == m-1) continue;
        printf(" ");
    }
    printf("\n");
    for (int i = 0; i < m; i++) {
        printf("%.3lf", b[i]);
        if (i == m-1) continue;
        printf(" ");
    }
    printf("\n");
}

void sort(char a[][10005], double b[], int m) {
    for (int i = 0; i < m-1; i++) {
        for (int j = i+1; j < m; j++) {
            if (b[i] - b[j] > es) {
                swap(&b[i], &b[j]);
                cswap(a[i], a[j]);
            }
        }
    }
}

void ghep(char *s1, char *s2) {
    char temp[10005];
    strcpy(temp, s1);
    strcat(temp, s2);
    strcpy(s1, temp);
}

void solve(char a[][10005], double b[], int m) {
    sort(a, b, m);
    inVet(a, b, m);
    while (m > 1) {
        b[0] += b[1];
        ghep(a[0], a[1]);
        for (int i = 1; i < m - 1; i++) {
            b[i] = b[i+1];
            strcpy(a[i], a[i+1]);
        }
        m--;
        if (check(b, m) == 0) {
            inVet(a, b, m);
            sort(a, b, m);
        }
        // if (m > 1) 
        inVet(a, b, m);
    }
}
int main() {
    int t;
    scanf("%d", &t); 
    
    while (t--) {
        int m;
        scanf("%d", &m);
        char a[m][10005];
        double b[m];
        
        for (int i = 0; i < m; i++) {
            scanf("%s", a[i]);
        }
        for (int i = 0; i < m; i++) {
            scanf("%lf", &b[i]);
        }
        solve(a, b, m);
    }
}
