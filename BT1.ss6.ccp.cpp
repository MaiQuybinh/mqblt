#include <stdio.h>

int main() {
    int so, tong_so_le = 0;

    printf("Nhap vao 5 so nguyen:\n");

    // vong lap nhap 5 so nguyen 
    for (int i = 1; i <= 5; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &so);

        // Kiem tra so le
        if (so % 2 != 0) {
            tong_so_le += so; // Cong so le vao tong
        }
    }

    printf("Tong cac so le la: %d\n", tong_so_le);

    return 0;
}
