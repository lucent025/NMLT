#include "ktsonguyen.c"
#include "ucbc.c"
#include "tiendien.c"
#include "doitien.c"
#include "laisuatvay.c"
#include "karaoke.c"
#include <stdlib.h>

void ExitOrConntinue();
void wrongtype();
void opt();



void opt(){
    printf("\n");
    printf("+---------------------------------+\n");
    printf("|                                 |\n");
    printf("|   1. Kiem tra so nguyen to.     |\n");
    printf("|   2. UCLN, BCNN.                |\n");
    printf("|   3. Tinh tien Karaoke.         |\n");
    printf("|   4. Tinh tien dien tieu thu.   |\n");
    printf("|   5. Doi tien.                  |\n");
    printf("|   6. Tinh lai suat vay.         |\n");
    printf("|                                 |\n");
    printf("+---------------------------------+\n");

    int luachon;
    printf("Hay Nhap Lua Chon: ");
    scanf("%d", &luachon);
    switch (luachon){
        case 1:
            ktsonguyen();
            ExitOrConntinue();
            break;
        case 2:
            ucbc();
            ExitOrConntinue();
            break;
        case 3:
            karaoke();
            ExitOrConntinue();
            break;
        case 4:
            tiendien();
            ExitOrConntinue();
            break;
        case 5:
            doitien();
            ExitOrConntinue();
            break;
        case 6:
            laisuatvay();
            ExitOrConntinue();
            break;
        default:
            wrongtype();
            opt();
            break;
    }
}

void ExitOrConntinue(){
    printf("\n");
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
    printf("\n");
    printf("###################################\n");
    printf("#                                 #\n");
    printf("#    Nhap sai, xin hay nhap lai   #\n");
    printf("#                                 #\n");
    printf("###################################\n");
}
int main(){
    opt();
    return 0;
}