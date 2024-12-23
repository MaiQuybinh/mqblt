#include <stdio.h>

int main() {
    int nam, thang;
    int so_ngay;

    // nguoi dung nhap nam va thang
    printf("Nhap nam: ");
    scanf("%d", &nam);
    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);

    // Kiem tra thang va gan so ngay 
    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le! Vui long nhap gia tri tu 1 den 12.\n");
    } else {
        switch (thang) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                so_ngay = 31;
                break;
            case 4: case 6: case 9: case 11:
                so_ngay = 30;
                break;
            case 2:
                // Kiem tra nam nhuan cho tháng 2
                if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
                    so_ngay = 29; // Nam nhuan có 29 ngày
                } else {
                    so_ngay = 28; // Nam khong nhuan co 28 ngày
                }
                break;
        }

        printf("Thang %d nam %d co %d ngay.\n", thang, nam, so_ngay);
    }

    return 0;
}
