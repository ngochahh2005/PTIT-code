//#include <stdio.h>
//#include <math.h>
//int sang[1000005]; 
//int main()
//{
//	sang[0] = 1;
//	sang[1] = 1;
//	for (int i = 2; i <= 1000; i++) {
//		if (sang[i] == 1) continue;
//		for (int j = i*i; j <= 1000000; j+=i) {
//			sang[j] = 1;
//		}
//	}
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		long long l, r, d = 0;
//		scanf("%lld%lld", &l, &r);
//		long long left = sqrt(l);
//		long long right = sqrt(r);
//		if (left * left == l) left++;
//		if (right*right == r) right--;
//		for (int i = left; i <= right; i++) {
//			if (sang[i] == 0) d++;
//		}
//		printf("%lld\n", d);
//	}
//}
#include <stdio.h>
#include <math.h>
#include <stdint.h>

#define lmt 1000000

uint8_t sang[(lmt + 7) / 8];

int isPrime(int n) {
    return (sang[n / 8] & (1 << (n % 8))) == 0;
}

void isntPrime(int n) {
    sang[n / 8] |= (1 << (n % 8));
}

int main() {
    sang[0] = 0x3;
    for (int i = 2; i <= 1000; i++) {
        if (isPrime(i)) {
            for (int j = i * i; j <= lmt; j += i) {
                isntPrime(j);
            }
        }
    }

    int t;
    scanf("%d", &t);
    while (t--) {
        long long l, r, d = 0;
        scanf("%lld%lld", &l, &r);
        long long left = sqrt(l);
        long long right = sqrt(r);
        if (left * left == l) left++;
        if (right * right == r) right--;
        for (int i = left; i <= right; i++) {
            if (isPrime(i)) {
                d++;
            }
        }
        printf("%lld\n", d);
    }
}

