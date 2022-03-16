#include <stdio.h>

int main(){
    arr2d();
    return 0;
}

int arr2d(){
    int hang,cot,i,j;
    printf("Nhap vao so phan tu cua hang: "); scanf("%d",&hang);
    printf("Nhap vao so phan tu cua cot: "); scanf("%d",&cot);
    int mang[hang][cot];
    for (i = 0; i < hang; i++){
        for (j = 0; j < cot; j++){
            printf("Mang[%d][%d]: ",i,j);
            scanf("%d",&mang[i][j]);
        }
    }
    for (int o = 0; o < hang; o++){
        for (int m = 0; m < cot; m++){
            printf("Mang[%d][%d]",mang[o],mang[m]);
        }
    }
}