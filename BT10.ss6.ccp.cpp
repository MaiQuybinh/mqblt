#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    // So nho hon hoac bang 1 khong phai so nguyen to
    if (n <= 1) {
        return false;
    }
    // Kiem tra tu 2 den can bac hai cua n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;
}

