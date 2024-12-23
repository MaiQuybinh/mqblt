#include <stdio.h>
#include <math.h> // dung cho ham sqrt

int main() {
    float a, b, c;
    float delta, x1, x2; //nghiem

    // Nhap he so a,b,c
    printf("Giai phuong trinh bac 2: ax^2 + bx + c = 0\n");
    printf("Nhap he so a (a khac 0): ");
    scanf("%f", &a);

    // Kiem tra neu a=0 khong phai pt bac 2
    if (a == 0) {
        printf("He so a phai khac 0. Day khong phai la phuong trinh bac 2.\n");
        return 0;
    }

    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        // pt co 2 nghiem phan biet
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (delta == 0) {
        // pt co nghiem kep
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep:\n");
        printf("x1 = x2 = %.2f\n", x1);
    } else {
        // pt vo nghiem
        printf("Phuong trinh vo nghiem.\n");
    }

    return 0;
}
