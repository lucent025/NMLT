#include <stdio.h>

int main(){
    trungbinh3();
    return 0;
}

void trungbinh3(){
    int sophantu,i,tong = 0,biendem = 0;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&sophantu);
    int mang[sophantu];
    for (i = 0; i < sophantu; i++){
        printf("Nhap vao phan tu thu %d: ",i);
        scanf("%d",&mang[i]);
    }
    float trungbinh;
    for (int index = 0; index < sophantu; index++){
        if (mang[index] % 3 == 0){
            tong += mang[index];
            biendem++;
        }
    }
    trungbinh = tong/biendem;
    printf("Trung binh cong chia het cho 3 la: %.2f",trungbinh);
}