#include <stdio.h>
#include <math.h>
#define lmt 1000000

int check1(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
//    printf("%d\n", s);
    if (s % 10 == 8) return 1;
    return 0;
}

int sang[lmt+5];
int sangU[lmt+5];
void sangnt() {
	sang[0] = sang[1] = 1;
	for (int i = 2; i <= 1000; i++) {
		if (sang[i] == 1) continue;
		for (int j = i*i; j <= lmt; j+=i) {
			sang[j] = 1;
		}
	}
	for (int i = 2; i <= lmt; i++) {
		if (sang[i] == 1) continue;
		for (int j = i; j <= lmt; j += i) {
			sangU[j]++;
		}
	}
}

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main() {
    int a, b;
    sangnt();
    scanf("%d %d", &a, &b);
    if (a > b) swap(&a, &b);
    int kt = 0;
    for (int i = a; i <= b; i++) {
        if (check1(i) == 1 && sangU[i] >= 3) {
        	kt = 1;
            printf("%d ", i);
        }
    }
    if (kt == 0) printf("28tech");
//	for (int i = 1000; i <= 2000; i++) {
//		printf("%d	%d\n", i, sangU[i]);
//	}
}
