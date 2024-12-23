#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la: ", n);

    // Tim cac uoc
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { 
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
