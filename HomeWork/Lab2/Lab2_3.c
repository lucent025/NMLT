#include <stdio.h>

int main(){

    int bankinh;
    float chuvi,dientich;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%d",&bankinh);
    chuvi = 2*3.14*bankinh;
    dientich = 3.14*bankinh*bankinh;
    
    printf("Chu vi: %.2f\n",chuvi);
    printf("Dien tich: %.2f\n",dientich);
    return 0;
}