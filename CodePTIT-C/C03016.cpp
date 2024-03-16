#include <stdio.h>
#include <math.h>

int check(long long n)
{
    if (n == 0 || n == 1)
        return 1;
    long long f1 = 0, f2 = 1;
    long long fi = f1 + f2;
    while (fi < n)
    {
        fi = f1 + f2;
        f1 = f2;
        f2 = fi;
    }
    if (fi == n) return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        if (check(n)) printf("YES\n");
        else printf("NO\n");
    }
}
