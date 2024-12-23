#include <stdio.h>
#include <string.h> //  dung cho ham strcmp

int main() {
    char mat_khau_dung[] = "12345";
    char mat_khau_nhap[50]; 
    //luu mat khau

    // nguoi dung nhap mat khau 
    printf("Vui long nhap mat khau: ");
    scanf("%49s", mat_khau_nhap); 

    // So sanh voi mat khau dung
    if (strcmp(mat_khau_nhap, mat_khau_dung) == 0) { // strcmp tra ve 0 neu hai chuoi giong nhau
        printf("Mat khau chinh xac! Ban da dang nhap thanh cong.\n");
    } else {
        printf("Mat khau sai! Vui long thu lai.\n");
    }

    return 0;
}
