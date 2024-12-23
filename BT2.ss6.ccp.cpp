#include <stdio.h>

int main() {
    int so, so_chan = 0, so_le = 0; 

    printf("Nhap vao 5 so nguyen:\n");

    // Vong lap nhap 5 so nguyen
    for (int i = 1; i <= 5; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &so);

        if (so % 2 == 0) {
            so_chan++; // so chan tang len
        } else {
            so_le++;   // so le tang len 
        }
    }

    printf("So luong so chan la: %d\n", so_chan);
    printf("So luong so le la: %d\n", so_le);

    return 0;
}
