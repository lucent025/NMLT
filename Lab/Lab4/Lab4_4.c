#include "Lab4_1.c"
#include "Lab4_2.c"
#include "Lab4_3.c"
#include <stdlib.h>

int main(){
    opt();
    return 0;
}

void opt(){
 
    printf("+---------------------------------------+\n");
    printf("|                                       |\n");
    printf("|   1. Tinh trung binh cong so chan.    |\n");
    printf("|   2. Xac dinh so nguyen to.           |\n");
    printf("|   3. Xac dinh so chinh phuong.        |\n");
    printf("|   4. Ket thuc chuong trinh            |\n");
    printf("|                                       |\n");
    printf("+---------------------------------------+\n");

    int luachon;
    printf("Hay Nhap Lua Chon: ");
    scanf("%d", &luachon);
    switch (luachon){
        case 1:
            trungbinhcong();
            ExitOrConntinue();
            break;
        case 2:
            songuyento();
            ExitOrConntinue();
            break;
        case 3:
            sochinhphuong();
            ExitOrConntinue();
            break;
        case 4:
            exit(0);
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
int wrongtype(){
    printf("###################################\n");
    printf("#                                 #\n");
    printf("#    Nhap sai, xin hay nhap lai   #\n");
    printf("#                                 #\n");
    printf("###################################\n");
}