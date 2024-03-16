#include <stdio.h>
#define limit 2000000 

int sang[limit + 1] = {0};
void sangnt()
{
    for (int i = 2; i * i <= limit; i++)
        if (sang[i] == 0)
            for (int j = i * i; j <= limit; j += i)
                if (sang[j] == 0) sang[j] = i;
    for (int i = 2; i <= limit; i++)
        if (sang[i] == 0)
            sang[i] = i;
}

int sum(int n)
{
    int s = 0;
    while (n != 1)
    {
        s += sang[n];
        n /= sang[n];
    }
    return s;
}

int main()
{
    sangnt();
    int n;
    scanf("%d", &n);
    long long s = 0;
    while (n--)
    {
        int x;
        scanf("%d", &x);
        s += sum(x);
    }
    printf("%lld", s);
}
