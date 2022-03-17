#include "songuyento.c"
#include "tiendien.c"
#include <stdlib.h>

void opt();
void ExitOrConntinue();
void wrongtype();

int main(){
    opt();
    return 0;
}

void opt(){
 
    printf("+---------------------------------+\n");
    printf("|                                 |\n");
    printf("|   1. Kiểm tra số nguyên tố.     |\n");
    printf("|   2. Tính tiền điện.            |\n");
    printf("|   3. Giai phuong trinh bac 2.   |\n");
    printf("|   4. Tinh tien dien tieu thu.   |\n");
    printf("|   5. Ket thuc chuong trinh      |\n");
    printf("|                                 |\n");
    printf("+---------------------------------+\n");

    int luachon;
    printf("Hay Nhap Lua Chon: ");
    scanf("%d", &luachon);
    switch (luachon){
        case 1:
            songuyento();
            ExitOrConntinue();
            break;
        case 2:
            tiendien();
            ExitOrConntinue();
            break;
        default:
            wrongtype();
            opt();
            break;
    }
    
}
void ExitOrConntinue(){
    printf("+-----------------------------------+\n");
    printf("|                                   |\n");
    printf("|      Ban co muon tiep tuc?        |\n");
    printf("|   1. Tiep Tuc.         2. Thoat.  |\n");
    printf("|                                   |\n");
    printf("+-----------------------------------+\n");
    int eoc;
    printf("Nhap lua chon: ");
    scanf("%d",&eoc);
    switch (eoc){
        case 1:
            opt();
            break;
        case 2:
            exit(0);
            break;
        default:
            wrongtype();
            ExitOrConntinue();
            break;

    }
}
void wrongtype(){
    printf("###################################\n");
    printf("#                                 #\n");
    printf("#    Nhap sai, xin hay nhap lai   #\n");
    printf("#                                 #\n");
    printf("###################################\n");
}