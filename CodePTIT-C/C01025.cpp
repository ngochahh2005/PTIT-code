#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main()
{
    int a[4][2];
    int xMin = 100, xMax = -100;
    int yMin = 100, yMax = -100;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d%d", &a[i][0], &a[i][1]);
        xMin = min(xMin, a[i][0]);
        xMax = max(xMax, a[i][0]);
        yMin = min(yMin, a[i][1]);
        yMax = max(yMax, a[i][1]);
    }
    int vl = max(xMax - xMin, yMax - yMin);
    printf("%d", vl * vl);
    return 0;
}
