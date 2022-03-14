#include <stdio.h>

int main(){
    trungbinhcong();
    return 0;
}

void trungbinhcong(){

    int min,max,tong = 0,biendem = 0, i = min;
    float trungbinh;
    printf("Nhap vao min: ");
    scanf("%d",&min);
    printf("Nhap vao max: ");
    scanf("%d",&max);
    while (i <= max){
        if (i % 2 == 0){
            tong += i;
            biendem++;
            i++;
        }
    }
    trungbinh = tong/biendem;
    printf("Trung binh cong chia het cho 2 la: %.2f",trungbinh);

}