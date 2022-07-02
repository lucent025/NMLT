#include <stdio.h>

int main(){

    int dai,rong,chuvi,dientich;
    printf("Nhap vao chieu rong: ");
    scanf("%d",&rong);
    printf("Nhap vao chieu dai: ");
    scanf("%d",&dai);
    chuvi = (dai+rong)*2;
    dientich = dai*rong;
    printf("Chu vi: %d\n",chuvi);
    printf("Dien tich: %d\n",dientich);
    return 0;
}