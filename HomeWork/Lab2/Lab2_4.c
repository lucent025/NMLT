#include <stdio.h>

int main(){

    float toan,ly,hoa,diemtb;
    printf("Nhap diem mon Toan:");
    scanf("%f",&toan);
    printf("Nhap diem mon Ly:");
    scanf("%f",&ly);
    printf("Nhap diem mon Hoa:");
    scanf("%f",&hoa);

    diemtb = (toan*3 + ly*2 +hoa)/3;

    printf("Diem trung binh: %.2f\n",diemtb);
    return 0;
}