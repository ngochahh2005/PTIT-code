#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long

void merge (int a[], int l, int m, int r){
    int i, j;
    int n1 = m - l + 1, n2 = r - m;
    int x[n1], y[n2];

    for (i = 0; i < n1; i++){
        x[i] = a[l + i];
    }
    for (i = 0; i < n2; i++){
        y[i] = a[m + 1 + i];
    }
    int idx = l; i = 0; j = 0;
    while (i < n1 && j < n2){
        if (x[i] <= y[j]) a[idx++] = x[i++];
        else a[idx++] = y[j++];
    }
    while (i < n1) a[idx++] = x[i++];
    while (j < n2) a[idx++] = y[j++];
}

void mergeSort (int a[], int l, int r){
    if (l < r){
        int m = (l + r) / 2;
        mergeSort(a, l, m); 
        mergeSort(a, m + 1, r); 
        merge(a, l, m, r);
    }
}


int arraysEqual(int a[], int b[], int n, int m) {
    for (int i = 0, j = 0; i < n - 1, j < m - 1; i++, j++) {
        // printf("%d  :   %d  \\  %d  :   %d\n", i, a[i], j, b[j]);
        while (a[i] == a[i+1]) i++;
        while (b[j] == b[j+1]) j++;
        // printf("%d  :   %d  \\  %d  :   %d\n", i, a[i], j, b[j]);
        if (a[i] != b[j]) return 0;
    }
    if (a[n-1] != b[m-1]) return 0;
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        int a[n + 1], b[m + 1];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < m; i++)
            scanf("%d", &b[i]);

        mergeSort(a, 0, n - 1);
        mergeSort(b, 0, m - 1);

        if (arraysEqual(a, b, n, m)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
